#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int returnBigger(int a, int b)
{
	string s1 = to_string(a) + to_string(b);
	string s2 = to_string(b) + to_string(a);
	int i = stoi(s1);
	int j = stoi(s2);
	if (i > j)
		return a;
	else
		return b;
}

void myFunc(vector<int> arr, int count)
{
	int temp = 0;
	int tmp = 0;
	for (int i = 0; i < count; i++)
	{
		for (int j = i + 1; j < count; j++)
		{
			temp = returnBigger(arr[i], arr[j]);
			if (temp == arr[i]) // means that arr[i] is greater than arr[j]
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	reverse(arr.begin(), arr.end());
	for (auto it : arr)
	{
		cout << it << " ";
	}
}
int main()
{
	vector<int> arr;
	int temp = 0, count = 0;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cin >> temp;
		arr.push_back(temp);
	}
	myFunc(arr, count);
	return 0;
}

// TEST CASE
/*
link -> https://www.interviewbit.com/blog/arrange-numbers-to-form-biggest-number/
1. 4
   546 54 548 60
   => 60 548 546 54
2. 8
   1 34 3 98 9 76 45 4
   9 98 76 45 4 34 3 1
*/