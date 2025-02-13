#include<iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,6,7,3,2,4,6};
    map<int , int> count;

    for(int n  : arr){
        count[n];
    }

    for(auto pair : count){
        cout << pair.first << " : " << pair.second << endl;
    }

    return 0;
}