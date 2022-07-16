#include "stdc++.h"
using namespace std;

class Solution
{
public:
    int maxArea(vector<int> &nums)
    {
        int i = 0, j = nums.size() - 1;
        int max = 0, area = 1;
        while (i < j)
        {
            area = min(nums[i], nums[j]);
            area *= abs(i - j);
            if (area > max)
                max = area;

            if (nums[i] < nums[j])
                i++;
            else
                j--;
        }
        return max;
    }
};

int main()
{
    Solution obj;
    vector<int> height;
    int size;
    cin >> size;
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        cin >> temp;
        height.push_back(temp);
    }
    cout << obj.maxArea(height);
    return 0;
}