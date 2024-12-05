// ValidPalindrome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "header.h"
int main() {
	Solution solution;

	// Test cases
	string test1 = "A man, a plan, a canal: Panama";
	string test2 = "race a car";
	string test3 = " ";
	string test4 = "Was it a car or a cat I saw?";

	// Test and print results
	cout << "Test 1: \"" << test1 << "\" is "
		<< (solution.isPalindrome(test1) ? "a palindrome" : "not a palindrome") << endl;

	cout << "Test 2: \"" << test2 << "\" is "
		<< (solution.isPalindrome(test2) ? "a palindrome" : "not a palindrome") << endl;

	cout << "Test 3: \"" << test3 << "\" is "
		<< (solution.isPalindrome(test3) ? "a palindrome" : "not a palindrome") << endl;

	cout << "Test 4: \"" << test4 << "\" is "
		<< (solution.isPalindrome(test4) ? "a palindrome" : "not a palindrome") << endl;

	// Interactive test
	string userInput;
	cout << "\nEnter your own string to test (or press Enter to exit): ";
	getline(cin, userInput);
	if (!userInput.empty()) {
		cout << "Your string is "
			<< (solution.isPalindrome(userInput) ? "a palindrome" : "not a palindrome") << endl;
	}

	return 0;
}
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
