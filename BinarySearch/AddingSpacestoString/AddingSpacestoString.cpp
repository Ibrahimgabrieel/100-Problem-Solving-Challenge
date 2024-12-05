// AddingSpacestoString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Header.h"

int main()
{

		Solution sol;

		// Test case 1
		string s1 = "LeetcodeHelpsMeLearn";
		vector<int> spaces1 = { 8,13,15 };
		cout << "Test 1: " << sol.addSpaces(s1, spaces1) << endl;
		// Expected: "Leetcode Helps Me Learn"

		// Test case 2
		string s2 = "icodeinpython";
		vector<int> spaces2 = { 1,5,7,9 };
		cout << "Test 2: " << sol.addSpaces(s2, spaces2) << endl;
		// Expected: "i code in py thon"

		// Test case 3
		string s3 = "spacing";
		vector<int> spaces3 = { 0,1,2,3,4,5,6 };
		cout << "Test 3: " << sol.addSpaces(s3, spaces3) << endl;
		// Expected: " s p a c i n g"

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
