#pragma once
// approaching using two pointer one preceding other when fastone find index then inform other to set whitespace 
//one slow pointer just for adding space
//fast pointer just adding character and check the index of characeter within in spaces vector or not
#pragma once
#include <string>
#include <vector>
#include <iostream>

using namespace std; 
class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int spaces_len = spaces.size();
        int s_len = s.length();

        int slow = 0;
        string newStr(s_len + spaces_len, ' ');
        int spaceIdx = 0;
        // Fast pointer iterates through original string
        for (int fast = 0; fast < s_len; fast++) {
            // Check if current position needs a space
            if (spaceIdx < spaces_len && fast == spaces[spaceIdx]) {
                slow++;      // Skip one position for space
                spaceIdx++; // Move to next space position
            }

            newStr[slow] = s[fast];  // Copy character
            slow++;                  // Move slow pointer
        }

        return newStr;
    }
};