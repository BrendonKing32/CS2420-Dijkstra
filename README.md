# CS2420-Dijkstra

You are a programmer for Wolverine Air. This company charters flights and offers discount airfare to UVU students for these flights. They have worked out a series of charter flights at incredible discounts. For example they provide some service to or from the following cities like: Salt Lake City, UT. (SLC); Seattle, WA. (SFA); San Francisco, CA (SFO); San Jose, CA. (SJC), Los Angeles, CA. (LAX), Las Vegas, NV (LV); Phoenix, AZ (PHX); and Denver, CO. (DEN). You are to write a program to help the reservation agents determine the least cost from a source airport to all potential destination airports and the connecting flights needed to get to each destination including their costs and mileage.

Not all flights go to and from each city. You will be given a text file containing the flights. Each line in the text file represents a direct flight containing a source airport abbreviation, a destination airport abbreviation, a distance in miles, and the cost (airfare) of the flight. For example from Salt Lake City, UT (SLC) to Denver, CO (DEN) the mileage is 379 and the cost would be $39. This entry in the data file would be:

SLC DEN 379 39

Your assignment is to create a program that allows the reservation agents to quote mileage and airfare from the source airport to all destinations from that source including multiple (connecting) flight information. There is no information about departures or arrival times so you do not need to worry about them (to simplify the problem).
