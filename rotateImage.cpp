#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> rotate(vector<vector<int>> &matrix)
    {
        int size = matrix[0].size();
        vector<vector<int>> myMat;
        int temp = 0;
        for (int i = 0; i < size; i++)
        {
            vector<int> tmp;
            for (int j = 0; j < size; j++)
            {
                temp = matrix[j][i];
                // Pushes 1 , 4 , 7
                tmp.push_back(temp);
            }
            // reverse the vector
            //  Reverses it to 7 , 4 , 1
            reverse(tmp.begin(), tmp.end());
            // Push the vector to answer matrix
            myMat.push_back(tmp);
        }
        return myMat;
    }
};

int main()
{
    vector<vector<int>> myArr;
    int size;
    cin >> size;
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        vector<int> arr;
        for (int j = 0; j < size; j++)
        {
            cin >> temp;
            arr.push_back(temp);
        }
        myArr.push_back(arr);
    }
    Solution obj;
    myArr = obj.rotate(myArr);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            cout << myArr[i][j] << " ";
        cout << endl;
    }

    return 0;
}