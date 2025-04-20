#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        stack<string> myStack;
        string directory = "";

        // Add trailing slash to handle last directory
        path += "/";

        cout << "Processing path: " << path << endl;  // Debug print

        for (int i = 0; i < path.length(); i++) {
            if (path[i] == '/') {
                cout << "Found slash, current directory: " << directory << endl;  // Debug print

                if (!directory.empty()) {
                    if (directory == "..") {
                        if (!myStack.empty()) {
                            cout << "Going up one level, popping: " << myStack.top() << endl;  // Debug print
                            myStack.pop();
                        }
                    }
                    else if (directory != ".") {
                        cout << "Pushing directory: " << directory << endl;  // Debug print
                        myStack.push(directory);
                    }
                    directory = "";
                }
            }
            else {
                directory += path[i];
            }
        }

        // Build the result path
        if (myStack.empty()) {
            return "/";
        }

        // Convert stack to vector for reverse iteration
        vector<string> dirs;
        while (!myStack.empty()) {
            dirs.push_back(myStack.top());
            myStack.pop();
        }

        // Build final path
        string result = "";
        for (int i = dirs.size() - 1; i >= 0; i--) {
            result += "/" + dirs[i];
        }

        cout << "Final result: " << result << endl;  // Debug print
        return result;
    }
};

// Function to test the solution
void testSimplifyPath(string path) {
    Solution sol;
    cout << "\nTest Case: " << path << endl;
    cout << "Simplified Path: " << sol.simplifyPath(path) << endl;
    cout << "------------------------" << endl;
}

int main() {
    // Test cases
    vector<string> testCases = {
        "/home/",
        "/home//foo/",
        "/a/./b/../../c/",
        "/../",
        "/home//foo/bar",
        "/...",
        "/..hidden",
        "////",
        "/home/user/./documents/../pictures"
    };

    // Run all test cases
    for (const string& test : testCases) {
        testSimplifyPath(test);
    }

    // Interactive testing
    string userPath;
    char continue_testing;

    do {
        cout << "\nEnter a path to simplify (e.g., /home/user/./docs): ";
        getline(cin, userPath);

        testSimplifyPath(userPath);

        cout << "Would you like to test another path? (y/n): ";
        cin >> continue_testing;
        cin.ignore();  // Clear the newline from input buffer

    } while (continue_testing == 'y' || continue_testing == 'Y');

    return 0;
}