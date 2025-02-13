#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

int main() {
    int num = 3; 
    vector<string> arr; 

    for (int i = 1; i <= num*num - 1; i++) {
        string temp = bitset<4>(i).to_string(); 
        arr.push_back(temp);
    }

    for (const string &val : arr) {
        cout << val << " ";
    }

    return 0;
}
