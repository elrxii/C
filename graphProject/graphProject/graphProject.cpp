/*
	Created by
	Ethan Roberts
	on 01/10/2020

	This program creates an ADT of a Graph.  "MatrixGraph" and "ListGraph" will be implemented.

*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>
#include <random>
#include <vector>
#include <iterator>
#include "graphProject.h"
using namespace std;



//TODO:  Working functions:  adjacency, neighbors

int main()
{
	AdjacencyMatrixGraph <int> myGraph;
	vector <int> vect;
	vector <int>::iterator it;

	myGraph.generateNewGraph(30, 0.0);
	myGraph.displayMatrixGraph();
	cout << "\n\nAdjacent? " << myGraph.adjacent(8, 5) << "\n\n\n";

	vect = myGraph.neighbors(20);
	for (it = vect.begin(); it != vect.end(); ++it) {
		cout << *it << " ";
	}

	

    return 0;
}

