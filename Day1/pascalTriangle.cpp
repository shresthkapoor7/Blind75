#include <iostream>
#include <vector>
using namespace std;


class Solution
{
public:
  void pascalTriangle(int n){
    // print the pascal's triangle
    vector<vector<int> >matrix(n); // create a matrix of row size
    for(int i=0;i<n;i++){
      matrix[i].resize(i+1); // creating a row of size = row
      matrix[i][0] = matrix[i][i] = 1;
      for(int j=0;j<i;j++)
      {
        matrix[i][j] = matrix[i-1][j-1] + matrix[i-1][j];
      }
    }
  }
};

void init(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif 
}

int main()
{
  init();
  int t;
  cin>>t;
  Solution ob;
  ob.pascalTriangle(t);
  return 0;
}