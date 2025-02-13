#include<iostream>
#include <string>
#include <map>
using namespace std;


void printMap(const map<int , string>& m){
    for(auto n : m){
        cout << n.first << " : " << n.second << endl;
    }
}

int main(){
    map<int , string> m;

    m[0] = "zero";
    m[1] = "one";
    m[3] = "three";
    m[2] = "two";

    printMap(m);


    return 0;
}