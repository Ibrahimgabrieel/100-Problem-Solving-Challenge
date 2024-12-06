// Search2DMatrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <vector>
#include <iostream>
#include "Header.h"
using namespace std;
int main() {
	// Test case 1  
	vector<vector<int>> matrix1 = {
		{1,  3,  5,  7},
		{10, 11, 16, 20},
		{23, 30, 34, 60}
	};

	Solution solution;

	// Test different targets  
	vector<int> targets = { 3, 16, 60, 4, 13, 70 };

	cout << "Matrix:" << endl;
	for (const auto& row : matrix1) {
		for (int num : row) {
			cout << num << "\t";
		}
		cout << endl;
	}
	cout << endl;

	for (int target : targets) {
		bool found = solution.searchMatrix(matrix1, target);
		cout << "Searching for " << target << ": " << (found ? "Found" : "Not found") << endl;
	}

	// Test case 2 - Empty matrix  
	vector<vector<int>> matrix2;
	cout << "\nTesting empty matrix:" << endl;
	cout << "Result: " << solution.searchMatrix(matrix2, 1) << endl;

	// Test case 3 - Single element matrix  
	vector<vector<int>> matrix3 = { {1} };
	cout << "\nTesting single element matrix:" << endl;
	cout << "Searching for 1: " << solution.searchMatrix(matrix3, 1) << endl;
	cout << "Searching for 2: " << solution.searchMatrix(matrix3, 2) << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
