#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include "Graph.h"
using namespace std;

//Function	:printHead()
//Purpose	:
//Parameters:
//Returns	:
void printHead() {
	cout << "Brendon King" << endl;
	cout << "Project 7" << endl;
	cout << "6/16/2019" << endl << endl;
}

int getAirportIndex(string airport) {
	if (airport == "SFA")
	{
		return 1;
	}
	if (airport == "SFO")
	{
		return 2;
	}
	if (airport == "LAX")
	{
		return 3;
	}
	if (airport == "LV")
	{
		return 4;
	}
	if (airport == "PHX")
	{
		return 5;
	}
	if (airport == "DEN")
	{
		return 6;
	}
	if (airport == "SLC")
	{
		return 7;
	}
	if (airport == "SJC")
	{
		return 8;
	}
}

string getAirportName(int n) {
	switch (n)
	{
	case 1:
		return "SFA";
	case 2:
		return "SFO";
	case 3:
		return "LAX";
	case 4:
		return "LV";
	case 5:
		return "PHX";
	case 6:
		return "DEN";
	case 7:
		return "SLC";
	case 8:
		return "SJC";
	default:
		break;
	}
}

void printDirectFlights(Edge edges) {
	Edge temp = edges;
	cout << getAirportName(temp.src) << "\t" << getAirportName(temp.dest) << "\t" << temp.mile << "\t" << temp.cost << endl;
}

int main() 
{
	Edge edges[15];
	string nextInput;
	string c1, c2;
	int c3, c4;
	int count = 0;
	char userInput = '?';
	string fileName;
	fstream textFile;
	string userInputString;
	printHead();
	while (userInput != 'n')
	{
		cout << "Enter program name: ";
		cin >> fileName;
		textFile.open(fileName);
		while (textFile.fail())
		{
			cout << "File Read Error. Please try again: ";
			cin >> fileName;
			textFile.open(fileName);
		}
		while (textFile >> nextInput)
		{
			c1 = nextInput;
			textFile >> nextInput;
			c2 = nextInput;
			textFile >> nextInput;
			c3 = stoi(nextInput);
			textFile >> nextInput;
			c4 = stoi(nextInput);
			int temp1 = getAirportIndex(c1);
			int temp2 = getAirportIndex(c2);
			edges[count] = { temp1, temp2, c3, c4 };
			count++;
		}
		textFile.close();
		cout << "DIRECT FLIGHTS" << endl;
		cout << "SRC\tDEST\tMILES\tCOST" << endl;
		for (int i = 0; i < 15; i++)
		{
			printDirectFlights(edges[i]);
		}
		int n = sizeof(edges) / sizeof(edges[0]);
		Graph g(edges, n, 8);
		g;
		cout << "Enter Airport: ";
		cin >> userInputString;
	}
	return 0;
}