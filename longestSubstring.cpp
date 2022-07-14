#include "stdc++.h"
#include <unordered_map>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int size = 0;
        vector<int> arr;
        arr.push_back(1);
        unordered_map<char, int> mymap;
        if (s.length() != 0)
        {
            for (int i = 0; i < s.length(); i++)
            {
                if (mymap.find(s[i]) != mymap.end())
                {
                    arr.push_back(size);
                    size = 0;
                    mymap.clear();
                    mymap[s[i]] = 1;
                }
                else
                {
                    mymap[s[i]] = 1;
                }
                size++;
            }
            arr.push_back(size);
            sort(arr.begin(), arr.end());
            return arr[arr.size() - 1];
        }
        else
        {
            return 0;
        }
    }
};
int main()
{
    string s;
    cin >> s;
    Solution obj;
    cout << obj.lengthOfLongestSubstring(s);
    return 0;
}