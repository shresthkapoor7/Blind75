#include "stdc++.h"
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> mp;
        int n = nums.size();
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if (mp.find(target - nums[i]) != mp.end())
            {
                ans.push_back(i);
                ans.push_back(mp[target - nums[i]]);
            }
            else
                mp[nums[i]] = i;
        }
        // for (auto i : mp)
        // {
        //     cout << i.first << " " << i.second << endl;
        // }
        // cout << "hey" << endl;
        return ans;
    }
};

int main()
{
    int target, count;
    cin >> target >> count;
    vector<int> arr;
    int temp = 0;
    for (int i = 0; i < count; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    Solution obj;
    vector<int> a;
    a = obj.twoSum(arr, target);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
