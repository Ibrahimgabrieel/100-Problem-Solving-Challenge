#pragma once
//compute the mid
//compare the key with mid if it find then termiante
// if not look for left when lower, set high is less than mid -1
// if it is higher, set lower is mid + 1
// if not found look for number is less than -1 then return index  

#include <vector>
using namespace std;  
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int mid;
        while (low <= high) {

            mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] > target) {
                high = mid - 1;
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                return mid;
            }

        }
        return low;

    }

};
