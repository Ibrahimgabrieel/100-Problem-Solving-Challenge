#pragma once
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;

        for (int i = low; i <= high; i++) {
            //check if the number has odd number 
            string num_str = to_string(i);
            if (num_str.length() % 2 != 0) {
                continue;
            }
            //divide number two part 
            int n = num_str.length() / 2;

            //calculate sum first half
            int firstHalf = 0;
            for (int i = 0; i < n; i++) {
                firstHalf += (num_str[i] - '0');
            }
            //calculate sum second half
            int SecondHalf = 0;
            for (int i = n; i < num_str.length(); i++) {
                SecondHalf += (num_str[i] - '0');
            }
            //compare two part
            if (firstHalf == SecondHalf) {
                count++;
            }
        }
        return count;
    }
};