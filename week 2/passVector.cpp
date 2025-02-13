#include<iostream>
#include <string>
#include <vector>
using namespace std;

void printVector(vector<int> arr){
    for(int n : arr){
        cout << n << " ";
    }

    cout << endl;

    for(int n : arr){
        cout << n+2 << " ";
    }

}

int main(){

    vector<int> arr = {1,2,3,4,5};

    printVector(arr);
    
    return 0;
}