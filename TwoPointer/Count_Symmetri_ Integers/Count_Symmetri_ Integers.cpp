#include <iostream>
#include "Header.h"
int main() {
    Solution solution;

    // Test cases
    cout << "Test Case 1:" << endl;
    int result1 = solution.countSymmetricIntegers(1, 100);
    cout << "Symmetric integers between 1 and 100: " << result1 << endl;

    cout << "\nTest Case 2:" << endl;
    int result2 = solution.countSymmetricIntegers(1200, 1230);
    cout << "Symmetric integers between 1200 and 1230: " << result2 << endl;

    // Add a pause to keep console window open
    cout << "\nPress Enter to exit...";
    cin.get();
    return 0;
}