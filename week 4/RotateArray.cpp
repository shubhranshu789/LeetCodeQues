#include<iostream>
#include <string>
#include <vector>
using namespace std;

void rotateArray(vector<int>& arr){
    int n = arr.size();
    int temp = arr[n-1];

    int i=0;

    for(i = n-2 ; i >= 0 ; i--){
        arr[i+1] = arr[i]; 
    }

    arr[0] = temp;
}

void display(vector<int>& arr){
    for(int n : arr){
        cout << n << " ";
    }
    cout << endl;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    rotateArray(arr);
    rotateArray(arr);
    display(arr);



    return 0;
}



class Solution {
    public:
        int kthGrammar(int n, int k) {
            int result = 0;
            k--; 
    
            while (k > 0) {
                if (k % 2 == 1) {
                    result = 1 - result;
                }
                k /= 2; 
            }
            
            return result;
        }
    };
    