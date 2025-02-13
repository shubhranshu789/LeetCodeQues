#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int findPairs(vector<int> arr, int k)
{
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] + arr[i] == k)
            {
                count++;
            }
        }
    }

    return count;
}

int findPairs2(vector<int> arr, int k)
{
    int count = 0;
    int comp = 0;
    map<int, int> m;

    for (int i = 0; i < arr.size(); i++)
    {
        comp = k - arr[i];
        if (m.find(comp) != m.end())
        {
            count = count + m[comp];
            
        }
        cout << count << " -> " << comp << " -> " << m[comp] << endl;
        m[arr[i]]++;
    }
    return count;
}

int main()
{
    vector<int> arr = {1, 5, 7, -1, 5};
    int k = 6;

    int res = findPairs2(arr, k);

    cout << res;

    return 0;
}