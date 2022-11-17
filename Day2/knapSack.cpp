#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int knapSack(std::vector<int> val,std::vector<int> w,int n,int weight){
  if(n==0 or weight == 0)
    return 0;
  if(w[n-1]>weight){
    return knapSack(val,w,n-1,weight);
  }
  else{
    return max(val[n-1]+knapSack(val,w,n-1,weight-w[n-1]),knapSack(val,w,n-1,weight));
  }
}


void init(){
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    #endif 
}

int main()
{
  init();
  int weight,n;
  cin>>weight>>n;
  std::vector<int> val;
  std::vector<int> w;
  int temp=0;
  for(int i=0;i<n;i++){
    cin>>temp;
    val.push_back(temp);
  }
  for(int i=0;i<n;i++){
    cin>>temp;
    w.push_back(temp);
  }
  cout<<knapSack(val,w,n,weight);
  return 0;
}