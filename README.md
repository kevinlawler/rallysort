Rallysort
=========

Like [sleepsort](http://rosettacode.org/wiki/Sorting_algorithms/Sleep_sort), rallysort is suboptimal sorting algorithm whose main value is in indicating a particular interesting model of computation: in this case the use of a time-based game loop. A game loop that tracks the positions of moving objects can be used to provide answers to computational questions. Rallysort works by assigning the values to be sorted as speeds to cars. The cars are then returned in the order they cross the finish line. The natural rallysort implementation sorts values in descending sort order.

While rallysort is a toy example, it is a representation of how game loops can be applied to more interesting questions. Game simulation is useful for objects with analogues in the physical world. For instance, game simulation could be used to sort cars with tires of various coefficients of friction in terms of time to completion over a given terrain of piecewise varying type. Game simulation is also useful for objects whose comparison function is adversarially competitive or is rooted in some physical model of the world: for instance, which bot AI lives longest in a Quake match.


