#include <iostream>
#include <stack>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;
    string s;
    stack<string> ans; // To store the history of strings for undo operation
    stack<short> res; // To store the command type

    for (int i = 0; i < num; i++) {
        int command;
        cin >> command;
        switch (command) {
            case 1: { // Append string
                string temp;
                cin >> temp;
                ans.push(s); // Save the current state before modifying
                s += temp;
                res.push(command);
                break;
            }
            case 2: { // Delete last k characters
                int k;
                cin >> k;
                ans.push(s); // Save the current state before modifying
                s.erase(s.size() - k);
                res.push(command);
                break;
            }
            case 3: { // Print the k-th character
                int k;
                cin >> k;
                cout << s[k - 1] << endl;
                break;
            }
            case 4: { // Undo the last operation
                if (!res.empty()) {
                    s = ans.top();
                    ans.pop();
                    res.pop();
                }
                break;
            }
        }
    }
    return 0;
}
