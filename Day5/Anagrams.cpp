#include<iostream>
#include <string>
#include <algorithm>
using namespace std;

// bool isAnagram(string str1, string str2) {
    
//     sort(str1.begin(), str1.end());
//     sort(str2.begin(), str2.end());
    
//     return str1 == str2;
// }

string removeChar(string str , int index){
    return str.substr(0 , index) + str.subtr(index + 1);
}

bool isAnagram(string s , string t){
    if(s.empty() && t.empty()) return true;
    if(s.length() != t.length()) return false;

    char firstChar = s[0];
    size_t found = t.find(firstChar);
    
    if(found != string::npos){
        return isAnagram(s.substr(1) , removeChar(t , found));
    }

}

bool isAnagram(string str1, string str2) {
    
}




int main(){

    string str1 = "listen";
    string str2 = "silent";

    cout << isAnagram(str1, str2) << endl;


    
    return 0;
}