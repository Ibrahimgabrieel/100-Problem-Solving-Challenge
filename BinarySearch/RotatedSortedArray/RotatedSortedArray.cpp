// RotatedSortedArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Header.h"
#include <cassert>

int main()
{
	Solution solution;

	// Test case 1: Rotated array
	vector<int> nums1 = { 4, 5, 6, 7, 0, 1, 2 };
	int target1 = 0;

	cout << "Test Case 1:\n";
	cout << "Array: ";
	for (int num : nums1) {
		cout << num << " ";
	}
	cout << "\nTarget: " << target1;
	cout << "\nFound at index: " << solution.search(nums1, target1) << "\n\n";

	// Test case 2: Different target
	vector<int> nums2 = { 4, 5, 6, 7, 0, 1, 2 };
	int target2 = 3;

	cout << "Test Case 2:\n";
	cout << "Array: ";
	for (int num : nums2) {
		cout << num << " ";
	}
	cout << "\nTarget: " << target2;
	cout << "\nFound at index: " << solution.search(nums2, target2) << "\n\n";

	// Test case 3: Single element array
	vector<int> nums3 = { 1 };
	int target3 = 1;

	cout << "Test Case 3:\n";
	cout << "Array: ";
	for (int num : nums3) {
		cout << num << " ";
	}
	cout << "\nTarget: " << target3;
	cout << "\nFound at index: " << solution.search(nums3, target3) << "\n";

}


