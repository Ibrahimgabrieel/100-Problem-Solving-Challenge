#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        char dictionary[] = { 'a','b','c','d','e','f','g','h','i','j' };
        int firstNumber = convertToNumber(firstWord, dictionary);
        int SecondNumber = convertToNumber(secondWord, dictionary);
        int targetNumber = convertToNumber(targetWord, dictionary);

        if (firstNumber + SecondNumber == targetNumber) {
            return true;
        }
        return false;
    }

    int convertToNumber(string word, char dict[]) {
        vector<int> result;

        for (char ch : word) {
            for (int i = 0; i < 10; i++) {
                if (ch == dict[i]) {
                    result.push_back(i);
                    break;
                }
            }
        }

        int number = 0;
        for (int digit : result) {
            number = number * 10 + digit;
        }

        return number;
    }
}; 
