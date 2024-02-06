<img src="https://data-portal.spiderrock.net/imgs/SpiderRock-Horizontal-Logo.png" width="300" alt="SpiderRock">

# SpiderRock's Connection Toolbox

This repo contains documentation, specifications and general information for how customers are expected to connect to the SpiderRock system. Whether you are a trading entity, developer or liquiity provider you may need to connect to SpiderRock for a variety of reasons and depending on those reasons a certain connection method may be more advantageous than another. Please consider your need to connect and consider all options. If you are having trouble choosing a method, reach out to our Support Desk for guidance. 

## Connection Methods
1. **[MLink API](./MLink/README.md)** - Our newest proprietary connection method, is a server that supports an SQL-like API where a user can connect via REST or WebSocket connection. Currently this method is single-direction down to the user in order to consume data. Soon, we plan to extend this functionality so it's bi-directional so users can interact and manipulate their orders and related messages. 

2. **[SpiderStream API](./SpiderStream/README.md)** - A proprietary connection method that allows for a low-latency stream of SpiderRock messages through C#, C++ or Python.

3. **[FIX](./FIX/README.md)** - The trading industry's standard protocol for messaging, our current specs are based on FIX 4.4. If you're a liquidity provider that is looking to connect into our ATS, this is the recommended connection method.

4. **[SRSE](./SRSE/README.md)** - The SpiderRock Storage Engine (SRSE) is a way for users to connect and query messages via SQL. Download your favorite SQL client, connect to our databases and leverage SQL to mine the desired data from our system.