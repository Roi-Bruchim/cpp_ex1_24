//roibr23@gmail.com 322695883
#include "Graph.hpp"
#include <iostream>

//using relevant name spaces
using namespace std;
using namespace ariel;

// constructor
Graph::Graph() {}

// destructor
Graph::~Graph() {}

// load graph
void Graph::loadGraph(const vector<vector<int>>& matrix) {
    // make sure matrix is square
    size_t numRows = matrix.size();
    for (size_t i = 0; i < numRows; ++i) {
        if (matrix[i].size() != numRows) {
            throw std::invalid_argument("Invalid graph: The graph is not a square matrix.");
        }
    }

    // if it square than load it to the graph
    neighborMatrix = matrix;
}

// print the graph
void Graph::printGraph() const {
    for (size_t i = 0; i < neighborMatrix.size(); ++i) {
        for (size_t j = 0; j < neighborMatrix[i].size(); ++j) {
            cout << neighborMatrix[i][j] << " ";
        }
        cout << endl;
    }

}
//return the matrix
const vector<vector<int>>& Graph::getNeigborMatrix() const {
    return this->neighborMatrix;
}
