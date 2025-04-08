// Check_if_Word_Equals_Summation_of_Two_Words.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Header.h"


//https://leetcode.com/problems/check-if-word-equals-summation-of-two-words/
// Main function to test the solution
int main() {
    Solution solution;

    // Test Case 1
    string firstWord1 = "acb";
    string secondWord1 = "cba";
    string targetWord1 = "cdb";
    cout << "Test Case 1: " << endl;
    cout << "First Word: " << firstWord1 << endl;
    cout << "Second Word: " << secondWord1 << endl;
    cout << "Target Word: " << targetWord1 << endl;
    cout << "Result: " << (solution.isSumEqual(firstWord1, secondWord1, targetWord1) ? "true" : "false") << endl;
    cout << endl;

    // Test Case 2
    string firstWord2 = "aaa";
    string secondWord2 = "a";
    string targetWord2 = "aab";
    cout << "Test Case 2: " << endl;
    cout << "First Word: " << firstWord2 << endl;
    cout << "Second Word: " << secondWord2 << endl;
    cout << "Target Word: " << targetWord2 << endl;
    cout << "Result: " << (solution.isSumEqual(firstWord2, secondWord2, targetWord2) ? "true" : "false") << endl;
    cout << endl;

    // Test Case 3
    string firstWord3 = "d";
    string secondWord3 = "b";
    string targetWord3 = "f";
    cout << "Test Case 3: " << endl;
    cout << "First Word: " << firstWord3 << endl;
    cout << "Second Word: " << secondWord3 << endl;
    cout << "Target Word: " << targetWord3 << endl;
    cout << "Result: " << (solution.isSumEqual(firstWord3, secondWord3, targetWord3) ? "true" : "false") << endl;

    return 0;
}