#include <bits/stdc++.h>
#include<vector>
using namespace std;
//brute force approach
int main()
{
  int value;
  vector<int>v;
  while(cin>>value){
      v.push_back(value);
  }
  int l=0,lmax=0,sum=0;
  int r=v.size()-1,rmax=0;
  int n=v.size();
  for(int i=1;i<n-1;i++){
      lmax=0,rmax=0;
      for(int j=i;j>=0;j--){
          if(v[j]>lmax){
              lmax=v[j];
          }
      }

      for(int j=i;j<n;j++){
          if(v[j]>rmax){
              rmax=v[j];
          }
      }
      sum+=min(lmax,rmax)-v[i];
  }
  
  cout<<sum;
  
    return 0;
}