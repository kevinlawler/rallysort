Rallysort
=========

Like [sleepsort](http://rosettacode.org/wiki/Sorting_algorithms/Sleep_sort), rallysort is a suboptimal sorting algorithm whose usefulness lies in indicating a particular approach to computation: in this case the use of a time-based game loop to solve problems. A game loop that tracks the positions of moving objects can be used to provide answers to computational questions. Rallysort works by assigning the values to be sorted as speeds to racecars. A race is simulated, and the cars are returned in the order they cross the finish line. The natural rallysort implementation sorts values in descending sort order.

While rallysort is a toy example, it is a representation of how game loops can be applied to more interesting questions. Game simulation is useful for objects with analogues in the physical world. Instead of an analytical solution, game simulation could be used to sort cars with tires of various coefficients of friction in terms of time to completion over a given terrain of piecewise varying type. Game simulation is also useful for questions about objects whose comparison function is adversarially competitive or is rooted in some physical model of the world: for instance, which bot AI lives longest in a Quake match, or which ant colony collects the most food.


