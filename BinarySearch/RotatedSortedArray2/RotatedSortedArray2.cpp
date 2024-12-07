// RotatedSortedArray2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "header.h"
using namespace std;
int main() {
	Solution solution;

	// Test Case 1  
	vector<int> nums1 = { 2, 5, 6, 0, 0, 1, 2 };
	int target1 = 0;
	cout << "Test Case 1:" << endl;
	cout << "Array: [2, 5, 6, 0, 0, 1, 2]" << endl;
	cout << "Target: " << target1 << endl;
	cout << "Result: " << (solution.search(nums1, target1) ? "true" : "false") << endl;
	cout << endl;

	// Test Case 2  
	vector<int> nums2 = { 2, 5, 6, 0, 0, 1, 2 };
	int target2 = 3;
	cout << "Test Case 2:" << endl;
	cout << "Array: [2, 5, 6, 0, 0, 1, 2]" << endl;
	cout << "Target: " << target2 << endl;
	cout << "Result: " << (solution.search(nums2, target2) ? "true" : "false") << endl;
	cout << endl;

	// Additional Test Case  
	vector<int> nums3 = { 1, 3, 5, 7, 0 };
	int target3 = 7;
	cout << "Test Case 3:" << endl;
	cout << "Array: [1, 3, 5, 7, 0]" << endl;
	cout << "Target: " << target3 << endl;
	cout << "Result: " << (solution.search(nums3, target3) ? "true" : "false") << endl;

	return 0;
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
