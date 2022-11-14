#include <iostream>
#include <vector>
using namespace std;


class Solution
{
public:
  void setZero(vector<vector<int> > &matrix){
    // find the element with value zero
    // more than one element can be zero
    int row = matrix.size();
    int col = matrix[0].size();
    int r=0,c=0;
    for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
        if(matrix[i][j]==0){
          r = i;
          c = j;
        }
      }
    }
    for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
        if(i == r or j == c){
          matrix[i][j]=0;
        }
        cout<<matrix[i][j]<<" ";
      }
      cout<<endl;
    }

  } 
  
};

void init(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif 
}

//[[1,1,1],[1,0,1],[1,1,1]]
int main()
{
  init();
  int row=0, col=0;
  cin>>row>>col;
  vector<vector<int> > matrix;
  int temp = 0;
  
  for(int i=0;i<row;i++){
    vector <int> myVec;
    for(int j=0;j<col;j++){
      cin>>temp;
      myVec.push_back(temp);
    }
    matrix.push_back(myVec);
  }
  Solution ob;
  ob.setZero(matrix);
  return 0;
}