#include <iostream>
#include <vector>
using namespace std;

int searchRotatedArray(vector<int>& arr, int target) {
    int s = 0, e = arr.size() - 1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] == target)
            return mid; 

        if (arr[s] <= arr[mid]) {
            if (arr[s] <= target && target < arr[mid]) 
                e = mid - 1; 
            else 
                s = mid + 1;  
        }
        else {
            if (arr[mid] < target && target <= arr[e]) 
                s = mid + 1;  
            else 
                e = mid - 1; 
        }
    }

    return -1; 
}

int main() {
    vector<int> arr = {6, 7, 8, 9, 1, 2, 3, 4, 5};
    int target = 3;
    
    int index = searchRotatedArray(arr, target);
    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found" << endl;
    
    return 0;
}
