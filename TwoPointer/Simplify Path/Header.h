class Solution {
public:
    string simplifyPath(string path) {

        stack<string> myStack;
        string directory;
        path += "/";

        for (int i = 0; i < path.length(); i++) {

            if (path[i] == '/') {
                if (!directory.empty()) {
                    if (directory == "..") {
                        if (!myStack.empty()) {
                            myStack.pop();
                        }
                    }
                    else if (directory != ".") {
                        myStack.push(directory);
                    }

                }
                directory = "";

            }
            else {

                directory += path[i];

            }



        }

        string result = "";
        if (myStack.empty()) {
            return "/";
        }

        vector<string> dirs;
        while (!myStack.empty()) {
            dirs.push_back(myStack.top());
            myStack.pop();
        }

        for (int i = dirs.size() - 1; i >= 0; i--) {
            result += "/" + dirs[i];
        }

        return result;
    }
};