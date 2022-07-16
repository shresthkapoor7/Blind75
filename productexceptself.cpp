#include "stdc++.h"
using namespace std;
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int prev = 1, next = 1;
        vector<int> arr;
        arr.push_back(next);
        for (int i = nums.size() - 2; i >= 0; i--)
        {
            next *= nums[i + 1];
            arr.push_back(next);
        }
        reverse(arr.begin(), arr.end());
        for (int i = 1; i < nums.size(); i++)
        {
            prev *= nums[i - 1];
            arr[i] = arr[i] * prev;
        }
        return arr;
    }
};
int main()
{
    int size;
    cin >> size;
    int temp = 0;
    vector<int> arr, ans;
    for (int i = 0; i < size; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    Solution obj;
    ans = obj.productExceptSelf(arr);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}