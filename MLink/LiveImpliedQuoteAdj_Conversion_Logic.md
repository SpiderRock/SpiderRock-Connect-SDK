# **Detailed Explanation of Conversion from `LiveImpliedQuote` to `LiveImpliedQuoteAdj` in the `MLinkServer`**

---

| **Field**             | **Source**        | **Formula/Adjustment**                                           | **Errors/Bounds**                                | **Notes**                                     |
|----------------------|------------------|-------------------------------------------------------------------|-------------------------------------------------|----------------------------------------------|
| **pkey**              | **Parent**       | Copied from parent.                                              | None.                                           | Unique identifier for the object.            |
| **ticker**            | **Parent**       | Copied from parent.                                              | None.                                           | Stock or option ticker.                      |
| **SeqNum**            | **Parent**       | Copied from parent.                                              | None.                                           | Sequence number for message ordering.       |
| **TimeRcvd**          | **Parent**       | Copied from parent.                                              | None.                                           | Timestamp when data was received.           |
| **uprc**              | **Adjusted**     | Updated to the new uPrc if available.                            | Bounded by limits, price change threshold.      | If adjustment fails, original price is retained. |
| **uPrcAdjResult**     | **Adjusted**     | See "Possible Values of `uPrcAdjResult`" below.  | See "Possible Values of `uPrcAdjResult`" below. | Indicates if uPrc was successfully adjusted. |
| **years**             | **Parent**       | Copied from parent.                                              | None.                                           | Represents time to expiration.              |
| **sdiv**              | **Parent**       | Copied from parent.                                              | None.                                           | sdiv                      |
| **ddiv**              | **Parent**       | Copied from parent.                                              | None.                                           | discrete Dividend                   |
| **rate**              | **Parent**       | Copied from parent.                                              | None.                                           | Risk-free interest rate.                    |
| **obid**              | **Parent**       | Copied from parent.                                              | None.                                           | Option bid price.                            |
| **oask**              | **Parent**       | Copied from parent.                                              | None.                                           | Option ask price.                            |
| **obiv**              | **Adjusted**     | Adjusted for underlying price change.                          | Bounded to min and max volatility limits.       | IV bounded to avoid out-of-range values.     |
| **oaiv**              | **Adjusted**     | Adjusted for underlying price change.                          | Bounded to min and max volatility limits.       | IV bounded to avoid out-of-range values.     |
| **svol**              | **Parent**       | Copied from parent.                                              | None.                                           | surface vol                     |
| **sprc**              | **Adjusted**     | sprc=parent sprc+Δ⋅dUprc+⋅Γ⋅dUprc2 | Bounded to be non-negative.                     | Represents surface price.     |
| **smrk**              | **Adjusted**     | Same adjustment as **sprc**, but clamped to bid/ask.            | Clamped within bid/ask if applicable.           | Surface mark price bounded by market data.|
| **veSlope**           | **Parent**       | Copied from parent.                                              | None.                                           | Volatility slope     |
| **de**                | **Adjusted**     | Delta + Gamma⋅dUprc)                                | Clamped to [-1, +1] range.                       | Adjustment depends on the change in uPrc.   |
| **ve**                | **Parent**       | Copied from parent.                                              | Must be non-NaN.                                | Vega    |
| **vo**                | **Parent**       | Copied from parent.                                              | None.                                           |   |
| **va**                | **Parent**       | Copied from parent.                                              | None.                                           | . |
| **ga**                | **Parent**       | Copied from parent.                                              | Must be non-NaN.                                |  |
| **ph**                | **Parent**       | Copied from parent.                                              | None.                                           |     |
| **ro**                | **Parent**       | Copied from parent.                                              | None.                                           |               |
| **th**                | **Parent**       | Copied from parent.                                              | None.                                           |                 |
| **deDecay**           | **Parent**       | Copied from parent.                                              | None.                                           | Decay of delta over time.                  |
| **calcErr**           | **Parent**       | Copied as a string.                                              | None.                                           |               |
| **calcSource**        | **Parent**       | Copied from parent.                                              | None.                                           | Tick/Loop              |
| **satm**              | **Parent**       | Copied from parent.                                              | None.                                           | ATM implied volatility.                   |
| **smny**              | **Parent**       | Copied from parent.                                              | None.                                           | Surface moneyness        |
| **up50**              | **Parent**       | Copied from parent.                                              | None.                                           |             |
| **dn50**              | **Parent**       | Copied from parent.                                              | None.                                           |           |
| **up15**              | **Parent**       | Copied from parent.                                              | None.                                           |             |
| **dn15**              | **Parent**       | Copied from parent.                                              | None.                                           |             |
| **up06**              | **Parent**       | Copied from parent.                                              | None.                                           |                |
| **dn08**              | **Parent**       | Copied from parent.                                              | None.                                           |              |
| **timestamp**         | **Adjusted**     | Updated to current system time.                                 | None.                                           | Reflects when the quote was adjusted.     |
| **priceType**         | **Parent**       | Copied from parent.                                              | None.                                           | Source or type of price of underlier                 |
| **synSpot**           | **Parent**       | Copied from parent.                                              | None.                                           | Synthetic spot price        |

---

## **uPrcAdjResult — Possible Values and Meanings**

| **Value**            | **Meaning**                      | **Cause**                                     |
|---------------------|-----------------------------------|----------------------------------------------|
| **None**             | No attempt to adjust uPrc.        | Initial state before adjustment.             |
| **OK**               | Successful adjustment.           | New valid price found, and change was reasonable. |
| **NullOption**       | No option data found.             | Option data could not be retrieved.          |
| **StaleUPrc**        | No live underlier price found.    | No live price for underlier.                |
| **InvalidUPrc**      | Invalid underlying price.         | New price is zero or negative.               |
| **UPrcRangeErr**     | Large price change.               | Log price change > 0.15 threshold.           |
| **OtherError**       | NaN in Greeks.                    | Delta, Vega, or Gamma has NaN.               |

---
