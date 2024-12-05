#pragma once

//check for incomplete row 
// staircase 
//  row=1 , row=2, row 3, row 4,  row  5 row 6  , row n 
//     1,      3     ,6,    10,     15,    21   , currentValue
// we mind we have array from 1 to n
//value of n , get from mathematical equation which is n(n+1)/2
// we set right as 1 and left as n , and then we get mid =left + right-left/2
// then compare mid with current value which is calcualted by mathmatical equation
// if then compare mid to current value if it found return index, which is mid
//if not less left +1 
// else  right -1
//if not found return right 
//which will be the right, which will be lastnumber not modified because left will be higher than right, it will point to wrong value , because we need the stairs with be complete for that we will take last one
// applying binary search approach


class Solution {
public:
    int arrangeCoins(int n) {
        int left = 1;
        int right = n;


        while (left <= right) {
            int  mid = left + (right - left) / 2;
            int currentValue = mid * (mid + 1) / 2;
            if (currentValue == n) {
                return mid;

            }
            if (currentValue < n) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }

        }
        return right;
    }
};