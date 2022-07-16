#include "stdc++.h"
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int minTillNow = INT_MAX;
        int profit = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            if (minTillNow > prices[i])
            {
                minTillNow = prices[i];
            }
            if (profit < prices[i] - minTillNow)
                profit = prices[i] - minTillNow;
        }
        return profit;
    }
};
int main()
{
    Solution obj;
    vector<int> arr;
    int ans;
    int size = 0;
    cin >> size;
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    ans = obj.maxProfit(arr);
    cout << ans;
    return 0;
}