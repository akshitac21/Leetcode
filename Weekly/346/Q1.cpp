#include <iostream>
#include <string>
#include <stack>

int minStringLength(const std::string& s) {
    std::stack<char> stack;

    for (char c : s) {
        if (!stack.empty() && ((stack.top() == 'A' && c == 'B') || (stack.top() == 'C' && c == 'D'))) {
            stack.pop();
        }
        else {
            stack.push(c);
        }
    }

    return stack.size();
}

int main() {
    std::string s = "ABFCACDB";
    int result = minStringLength(s);
    std::cout << result << std::endl;  // Output: 2

    return 0;
}
