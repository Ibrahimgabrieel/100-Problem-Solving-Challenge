#pragma once
///have low and high , mid
///enter loop
/// compare mid  with the key 
/// split array two part left and right  
/// check if the right side is sorted which mean low <= mid
///    check target between high and mid 
/// check for left side, is sorted high >= mid
 ///   check target between low and mid 

#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target)
                return true;

            // this part not rotated
            if (nums[low] <= nums[mid]) {
                if (target >= nums[low] && target < nums[mid])  //check if target on this side or not
                    high = mid - 1;
                else
                    low++;
            }
            // this part is rotated
            else {

                if (target > nums[mid] && target <= nums[high])
                    low = mid + 1;
                else
                    high--;
            }
        }
        return false;
    }
};