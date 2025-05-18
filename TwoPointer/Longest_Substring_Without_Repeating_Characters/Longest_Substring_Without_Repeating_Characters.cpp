#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int lengthOfLongestSubstring(const string& s) {
    unordered_map<char, int> lastIndex; // stores the last index of each character
    int maxLen = 0;
    int start = 0; // left boundary of the window

    for (int end = 0; end < s.length(); ++end) {
        char c = s[end];
        // If character is found in map and is inside the current window
        if (lastIndex.count(c) && lastIndex[c] >= start) {
            start = lastIndex[c] + 1; // move start to the right of the last occurrence
        }
        lastIndex[c] = end; // update last seen index
        maxLen = max(maxLen, end - start + 1);
    }
    return maxLen;
}

int main() {
    cout << lengthOfLongestSubstring("abcabcbb") << endl; // Output: 3
    cout << lengthOfLongestSubstring("bbbbb") << endl;    // Output: 1
    cout << lengthOfLongestSubstring("pwwkew") << endl;   // Output: 3
    return 0;
}