#pragma once
/// two pointer approach
// one start from beginning 
//another start from the end 
//compara each character from the first pointer and second pointer 
// if find anything without letter neglect and jumb another step
//tell right pointer less than the left one 
//terminate

#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {

            while (left < right && !isAlphanumeric(s[left])) {
                left++;
            }


            while (left < right && !isAlphanumeric(s[right])) {
                right--;
            }


            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }

            left++;
            right--;
        }
        return true;
    }

    bool isAlphanumeric(char c) {
        return (c >= 'A' && c <= 'Z') ||
            (c >= 'a' && c <= 'z') ||
            (c >= '0' && c <= '9');
    }
};