322695883 roibr23@gmail.com
# EX1- 
## Overview
In this assignment i implemented a graph by neighborhood matrix.
In the assignment there are the files graph.cpp and graph.hpp for the graph decleration and implemetion.
In graph.hpp: we can see the graph implemented by neighborhood matrix as a vector of vectors, it has constractor and distractor as well.
The graph.hpp has 3 methos that allow you get the neighborhood matrix, load a vector of vector into the matrix and print the graph as the matrix itself.
We also has the files Algorithms.hpp and Algorithms.cpp for methods for graph.

### Algorithms.hpp and Algorithms.cpp

- *isConnected*: This method make sure every vertex connected by at least one edge to the graph and returns if the graph is connected or not.
- *shortestPath*: This method find the shortest route between 2 given vertex, using Berman Ford algorithm to deal with negative weights,
                the method will return the shortest path if exist, if not return -1.
- *isContainsCycle*: This method check if the graph has cycles, using recursive helper method of DFS algorithm.
- *isBipartite*: This method check if the graph is Bipartite and returns the divided groups.
- *negativeCycle*: Helper method that used in Berman Ford shortestPath function to decide if we have a negativeCycle in the graph.
  
There also is a test file that check all the functions.
