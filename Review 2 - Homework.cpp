////
// Name: Josh Valerio
// Section: CS 131 - 2830
// Program Name: Review 2 - Homework
////
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int main()
{
	vector<vector<int>> firstMatrix(2);
	vector<vector<int>> secondMatrix(2); 
	int userInput;
	// Receive matrix 1 inputs
	cout << "Input Matrix 1 (2x2)\n";
	cout << setw(20) << setfill('-') << "-" << endl;
	for (int i = 0; i < 2; i++) {
		cout << "Input 2 values for row " << i + 1 << " separated by spaces: ";
		for (int j = 0; j < 2; j++) {
			cin >> userInput;
			firstMatrix[j].push_back(userInput);
		}
	}
	// Receive matrix 2 inputs
	cout << "Input Matrix 2 (2x2)\n";
	cout << setw(20) << setfill('-') << "-" << endl;
	for (int i = 0; i < 2; i++) {
		cout << "Input 2 values for row " << i + 1 << " separated by spaces: ";
		for (int j = 0; j < 2; j++) {
			cin >> userInput;
			secondMatrix[j].push_back(userInput);
		}
	}
	cout << endl;
	// Output matrix 1
	for (int i = 0; i < 2; i++) {
		cout << "\t";
		for (int j = 0; j < 2; j++) {
			cout << "\t" << firstMatrix[j][i];
		}
		cout << endl;
	}
	cout << "TIMES" << endl;
	// Output matrix 2
	for (int i = 0; i < 2; i++) {
		cout << "\t";
		for (int j = 0; j < 2; j++) {
			cout << "\t" << secondMatrix[j][i];
		}
		cout << endl;
	}
	cout << "EQUALS" << endl;
	// Multiplying matrices
	for (int i = 0; i < 2; i++)   {
		cout << "\t\t" << firstMatrix[0][i] * secondMatrix[0][0] + firstMatrix[1][i] * secondMatrix[0][1];
		cout << "\t" << firstMatrix[0][i] * secondMatrix[1][0] + firstMatrix[1][i] * secondMatrix[1][1] << endl;
		//I couldn't logic this out without excessive if statements so I stuck to this.
		//I see that the PDF says to only upload the cpp, but the webpage says otherwise. 
		//So I uploaded both cpp and screenshot just in case.
	}

	system("pause");
	return 0;
}
