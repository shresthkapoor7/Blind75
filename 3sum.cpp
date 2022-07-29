#include "stdc++.h"
using namespace std;
class Solution
{
public:
	vector<vector<int>> threeSum(vector<int> &nums)
	{
		sort(nums.begin(), nums.end());
		int p1, p2;
		vector<int> ans;

		vector<vector<int>> realAns;
		for (int i = 0; i < nums.size() - 1; i++)
		{
			if (i == 0 or i > 0 and (nums[i] != nums[i - 1]))
			{
				p1 = i + 1;
				p2 = nums.size() - 1;
				while (p1 < p2)
				{
					if (nums[p1] + nums[p2] + nums[i] > 0)
					{
						p2--;
					}
					else if (nums[p1] + nums[p2] + nums[i] < 0)
					{
						p1++;
					}
					else
					{
						ans.push_back(nums[p1]);
						ans.push_back(nums[p2]);
						ans.push_back(nums[i]);
						realAns.push_back(ans);
						ans.pop_back();
						ans.pop_back();
						ans.pop_back();
						while (p1 < p2 && nums[p1] == nums[p1 + 1])
							p1++;
						while (p1 < p2 && nums[p2] == nums[p2 - 1])
							p2--;
						p1++;
						p2--;
					}
				}
			}
		}
		return realAns;
	}
};
int main()
{
	int size;
	cin >> size;
	vector<int> arr;
	int count = size;
	int tmp = 0;
	for (int i = 0; i < count; i++)
	{
		cin >> tmp;
		arr.push_back(tmp);
	}

	Solution obj;
	obj.threeSum(arr);

	return 0;
}
