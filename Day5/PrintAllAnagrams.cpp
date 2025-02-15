#include<iostream>
#include <string>
using namespace std;

void printAllAnagrams(string str , int s , int e){
    if(s == e){
        cout << str << endl;
    }

    for(int i = s ; i <= e ; i++){
        swap(str[s] , str[i]);
        printAllAnagrams(str , s+1 , e);
        swap(str[s] , str[i]);
    }
}

int main(){

    string str = "abc";
    printAllAnagrams(str , 0 , str.length()-1);
    
    return 0;
}