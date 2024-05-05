#ifndef GRAPH_H
#define GRAPH_H
#include <vector>

// create ariel name space
namespace ariel {
    class Graph {
    private:
        // the graph will be neighbor matrix
        std::vector<std::vector<int>> neighborMatrix;

    public:
        //constructor and distractor
        Graph();
        ~Graph();

        /**
         * First make sure that the matrix is square and than put her to the graph
         * @param matrix the given matrix
         */
        void loadGraph(const std::vector<std::vector<int>>& matrix);
        /**
         * print the graph as matrix of neighbors
         */
        void printGraph() const;
        /**
         *
         * @return the Neighbor matrix
         */
        const std::vector<std::vector<int>>& getNeigborMatrix() const;
    };
}

#endif // GRAPH_H