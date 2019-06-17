#include <iostream>
#include <string>
#include <list>
#include "Node.h"
#include "Edge.h"
using namespace std;
#pragma once

typedef pair<int, int> Pair;

class Graph
{
	Node* getAdjListNode(int value, int mile, int cost, Node *head);
	int N;
public:
	Node** head;
	Graph(Edge edges[], int n, int N);
};

