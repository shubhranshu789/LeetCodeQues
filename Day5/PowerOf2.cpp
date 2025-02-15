#include <iostream>
using namespace std;

int powerOfTwo(int n) {
    if (n == 0) {
        return 1; 
    }
    
    int halfPower = powerOfTwo(n / 2); 
    
    if (n % 2 == 0) {
        return halfPower * halfPower; 
    } else {
        return 2 * halfPower * halfPower; 
    }
}

int main() {
    int res = powerOfTwo(4);
    cout << res << endl; 
    return 0;
}

// int main(){

//     int res = powerOfTwo(4);

//     cout << res << endl;
    
//     return 0;
// }


// #include<iostream>
// #include <string>
// using namespace std;

// int main(){
//     // power of 2
//     int num = 16;
//     bool isPowerOfTwo = (num && !(num & (num - 1)));
//     cout << "Is " << num << " a power of 2? " << (isPowerOfTwo? "Yes" : "No") << endl;

//     return 0;
// }