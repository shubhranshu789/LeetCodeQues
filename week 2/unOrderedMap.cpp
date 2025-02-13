#include<iostream>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

int main(){
    
    vector<int> arr = {1,2,3,4,5,6,7,6,7,3,2,4,6};
    unordered_map<int , int> umap;

    // umap["cat"] = 5;
    // umap["dog"] = 3;
    // umap["bird"] = 7;
    
    for(int n  : arr){
        umap[n]++;
    }



    for(auto& pair : umap){
        cout << pair.first << " : " << pair.second << endl;
    }

    return 0;
}