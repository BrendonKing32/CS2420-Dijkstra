#include "Graph.h"

Node* Graph::getAdjListNode(int value, int mile, int cost, Node* head)
{
	Node* newNode = new Node;
	newNode->val = value;
	newNode->mile = mile;
	newNode->cost = cost;

	// point new node to current head
	newNode->next = head;

	return newNode;
}

Graph::Graph(Edge edges[], int n, int N)
{
	// allocate memory
	head = new Node * [N]();
	this->N = N;

	// initialize head pointer for all vertices
	for (int i = 0; i < N; ++i) {
		head[i] = nullptr;
	}

	// add edges to the directed graph
	for (unsigned i = 0; i < n; i++) {
		int src = edges[i].src;
		int dest = edges[i].dest;
		int weight = edges[i].mile;
		int cost = edges[i].cost;

		// insert in the beginning
		Node* newNode = getAdjListNode(dest, weight, cost, head[src]);

		// point head pointer to new node
		head[src] = newNode;
	}
}
