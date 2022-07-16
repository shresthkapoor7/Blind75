#include "stdc++.h"
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> mymap;
        for (auto it : nums)
        {
            if (mymap.find(it) != mymap.end())
            {
                mymap[it] = 2;
                return true;
            }
            else
                mymap[it] = 1;
        }
        return false;
    }
};

int main()
{
    Solution obj;
    int temp = 0;
    vector<int> arr;
    int size = 0;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }

    cout << boolalpha << obj.containsDuplicate(arr);
    return 0;
}