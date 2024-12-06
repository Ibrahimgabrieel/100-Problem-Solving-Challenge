#pragma once
/// binary search approach
/// working on two level one , array-level, element -level inside array 
/// getting the array mid , then applying binary search on this array 
/// if exist return true if not and element less than the element on this array
/// then applying binary search on array-level  
/// if less than right  to previus if more jump to left
#include <vector>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;

        int rows = matrix.size();
        int cols = matrix[0].size();
        int left = 0;
        int right = rows - 1;

        // First binary search to find the potential row  
        while (left <= right) {
            int mid = left + (right - left) / 2;

            // Check if target is in range of this row  
            if (matrix[mid][0] <= target && target <= matrix[mid][cols - 1]) {
                // Second binary search within the row  
                int l = 0;
                int r = cols - 1;
                while (l <= r) {
                    int m = l + (r - l) / 2;
                    if (matrix[mid][m] == target) {
                        return true;
                    }
                    else if (matrix[mid][m] < target) {
                        l = m + 1;
                    }
                    else {
                        r = m - 1;
                    }
                }
                return false;
            }
            else if (matrix[mid][0] > target) {
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }
        return false;
    }
};