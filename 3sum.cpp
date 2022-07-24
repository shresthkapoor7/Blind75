#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
	int find(int start, int end, vector<int> arr, int value)
	{
		for (int i = start + 1; i < end; i++)
		{
			if (arr[i] == value)
				return i;
		}
		return -1;
	}
	void threeSum(vector<int> nums)
	{
		sort(nums.begin(), nums.end());
		vector<int> ans;
		int i, j;
		i = 0;
		j = nums.size();
		int temp = 0;

		while (i < j)
		{
			temp = nums[i] + nums[j];
			if (find(i, j, nums, -temp) == -1)
			{
				if (temp < 0)
					i++;
				else if (temp > 0)
					j--;
			}
			else
			{
				ans.push_back(nums[i]);
				ans.push_back(nums[j]);
				ans.push_back(temp);
				i++;
				j--;
			}
		}
		for (int i = 0; i < ans.size(); i++)
		{
			cout << ans[i] << " ";
		}
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
