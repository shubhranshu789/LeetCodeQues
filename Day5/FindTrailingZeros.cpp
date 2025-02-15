#include<iostream>
#include <string>
using namespace std;

int fact(int n){
    if(n == 0){
        return 1;
    }

    return n * fact(n-1);
}

int countZeros(int n){
    int rem = 0;
    int count = 0;
    while(n != 0){
        rem = n % 10;
        if(rem == 0){
            count++;
        }else{
            return count;
        }
        n = n/10;
    }

}

int main(){
    
    int n = 
    int fact1 = fact(n);
    cout << countZeros(fact1);
    // cout << fact1;

    return 0;
}