<img src="https://data-portal.spiderrock.net/imgs/SpiderRock-Horizontal-Logo.png" width="300" alt="SpiderRock">

# SpiderRock's Connection Toolbox

This repo contains documentation, specifications and general information for how customers are expected to connect to the SpiderRock system. Whether you are a trading entity, developer or liquiity provider you may need to connect to SpiderRock for a variety of reasons and depending on those reasons a certain connection method may be more advantageous than another. Please consider your need to connect and consider all options. If you are having trouble choosing a method, reach out to our Support Desk for guidance. 

## Connection Methods
1. **[MLink API](./MLink/README.md)** - Our newest proprietary connection method, is a server that supports an SQL-like API where a user can connect via REST or WebSocket connection. This method is bi-direction and users can interact and manipulate their orders and related messages as well as consume data. 

2. **[SRSE](./SRSE/README.md)** - The SpiderRock Storage Engine (SRSE) is a way for users to connect and query messages via SQL. Download your favorite SQL client, connect to our databases and leverage SQL to mine the desired data from our system.

3. **[FIX](./FIX/README.md)** - The trading industry's standard protocol for messaging, our current specs are based on FIX 4.4. If you're a liquidity provider that is looking to connect into our ATS, this is the recommended connection method.

4. **[SpiderStream API](./SpiderStream/README.md)** - A proprietary connection method that allows for a low-latency stream of SpiderRock messages through C#, C++ or Python. This does not provide direct trading functionality. This is the only single-directional connection listed.

## Connection Environments
1. **[Sandbox V8](./Env-Sandbox/README.md)** - A mock environment to test your integration with the SpiderRock system, including the SpiderRock Connect ATS. Includes the MLink API, FIX API, and the Trade tool.

2. Platform V7 - Production environment. Please contact the client support desk for connectivity.

3. Platform V8 - Production environment. Please contact the client support desk for connectivity.
