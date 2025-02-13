#include<iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

void count1(vector<int> arr , map<int , int>& count){
    for(int n : arr){
        count[n]++;
    }
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,6,7,3,2,4,6};
    map<int , int> count;

    count1(arr , count);

    for(auto n : count){
        cout << n.first << " : " << n.second << endl;
    }

    return 0;
}