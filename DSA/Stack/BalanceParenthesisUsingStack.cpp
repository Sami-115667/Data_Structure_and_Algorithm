#include <bits/stdc++.h>
using namespace std;

bool IsBalanceParenthesis(string s) {
    stack<char> c;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            c.push(s[i]);
        else {
            if (c.empty()) return false; // Check if stack is empty

            char top = c.top();
            c.pop();

            if (top == '(' && s[i] != ')')
                return false;
            else if (top == '{' && s[i] != '}')
                return false;
            else if (top == '[' && s[i] != ']')
                return false;
        }
    }
    return c.empty(); // Check if stack is empty after processing all characters
}

int main() {
    string s;
    cout << "Enter an expression: ";
    cin >> s;
    cout << (IsBalanceParenthesis(s) ? "The expression has balanced parentheses." : "The expression does not have balanced parentheses.") << endl;

    return 0;
}
