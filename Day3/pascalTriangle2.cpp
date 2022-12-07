#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> temp(rowIndex + 1, 1);
        vector<int> arr(rowIndex + 1, 1);
        for (int i = 2; i <= rowIndex; i++)
        {
            for (int j = 1; j < i; j++)
            {
                arr[j] = temp[j - 1] + temp[j];
            }
            temp = arr;
        }
        return temp;
    }
};

void init()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int main()
{
    init();
    int t;
    cin >> t;
    Solution ob;
    ob.getRow(t);
    return 0;
}