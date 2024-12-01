// BinarySearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Header.h"
using namespace std;

int main()
{
	vector<int> nums = { 1, 3, 5, 6 };
	Solution solution;
	int result = solution.searchInsert(nums, 5);  // returns 2
	int result2 = solution.searchInsert(nums, 2); // returns 1
	cout << result << " { 1, 3, 5, 6 } target :: 5 " << "\n";
	cout << result2 << " { 1, 3, 5, 6 } target :: 2 " << "\n";

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
