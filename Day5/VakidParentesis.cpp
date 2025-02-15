#include <iostream>
#include <unordered_set>
using namespace std;

void generateValidParenthesis(string s, unordered_set<string>& results) {
    if (s.empty()) {
        return;  
    }
    
    size_t pos = s.find("()");
    while (pos != string::npos) {  
        string newStr = s;
        newStr.erase(pos, 2);  
        
        if (results.find(newStr) == results.end()) {  
            results.insert(newStr);
            cout << newStr << endl;  
            generateValidParenthesis(newStr, results);  
        }
        
        pos = s.find("()", pos + 1);  
    }
}

int main() {
    string input = "((()))";
    unordered_set<string> results;
    
    cout << "Valid Parenthesis Sequences:\n";
    generateValidParenthesis(input, results);
    
    return 0;
}
