using System;
using System.Data;
using System.Text;
using Snowflake.Data.Client;

namespace Snowflake.RunQuery
{
    internal static class Program
    {
        private static int Main(string[] args)
        {
            if (args.Length < 2)
            {
                Console.Error.WriteLine("Usage: RunQuery <connection_string> <query>");
                Console.Error.WriteLine("Example: RunQuery \"account=myaccount;user=myuser;password=mypass;db=mydb;schema=public\" \"SELECT 1 AS n\"");
                return 1;
            }

            string connectionString = args[0];
            string query = args[1];

            try
            {
                using var conn = new SnowflakeDbConnection();
                conn.ConnectionString = connectionString;
                conn.Open();

                using var cmd = conn.CreateCommand();
                cmd.CommandText = query;
                using IDataReader reader = cmd.ExecuteReader();

                int fieldCount = reader.FieldCount;
                var sb = new StringBuilder();

                // Header row (column names)
                for (int i = 0; i < fieldCount; i++)
                {
                    if (i > 0) sb.Append('\t');
                    sb.Append(Escape(reader.GetName(i)));
                }
                Console.WriteLine(sb.ToString());

                // Data rows
                while (reader.Read())
                {
                    sb.Clear();
                    for (int i = 0; i < fieldCount; i++)
                    {
                        if (i > 0) sb.Append('\t');
                        object? value = reader.GetValue(i);
                        sb.Append(value == null || value is DBNull ? "" : Escape(value?.ToString()));
                    }
                    Console.WriteLine(sb.ToString());
                }

                return 0;
            }
            catch (Exception ex)
            {
                Console.Error.WriteLine($"Error: {ex.Message}");
                return 1;
            }
        }

        private static string Escape(string? s)
        {
            if (string.IsNullOrEmpty(s)) return "";
            // Replace tab and newline so output stays tab-separated
            return s.Replace("\t", " ").Replace("\r", " ").Replace("\n", " ");
        }
    }
}


