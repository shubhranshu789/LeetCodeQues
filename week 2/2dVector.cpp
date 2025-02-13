#include<iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main(){
    // vector<vector<int>> vec = {
    //     {1,2,3},
    //     {4,5,6},
    //     {7,8,9}
    // };


    // vec.push_back({10,11,12});
    // vec.insert(vec.begin() + 1 , {1,2,3});
    // vec.pop_back();
    // vec.erase(vec.begin() + 4);

    // for(auto row : vec){
    //     for(int n  : row){
    //         cout << n << " ";
    //     }
    //     cout << endl;
    // }

    // vector<string> arr = {"Apple" , "Banana" , "Cherry"};

    // for(string& n : arr){
    //     n = n + "!";
    // }


    // for(string n : arr){
    //     cout << n << " "; 
    // }



    //map

    // map<int , string> m;
    // m[0] = "shubh0";
    // m[1] = "shubh1";
    // m[3] = "shubh3";
    // m[2] = "shubh2";
    // m[4] = "shubh4";


    // map<int , int>m;
    // m[0] = 0;
    // m[1] = 1;
    // m[2] = 2;
    // m[3] = 3;
    // m[4] = 4;


    map<int , char>m;
    m[0] = 'A';
    m[1] = 'B';
    m[2] = 'C';
    m[3] = 'D';
    m[4] = 'E';

   m.insert({5 , 'F'});
   m.erase(5);


    cout << m[2] << endl;

    for(auto n : m){
        cout << n.first << " : " << n.second << endl;
    }
    return 0;
}