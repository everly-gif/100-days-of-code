#include <bits/stdc++.h>
#include<vector>
using namespace std;                                                          
int main()
{
  int value;
  vector<int>v;
  while(cin>>value){
      v.push_back(value);
  }
  //brute force approach  
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
  //optimal approach - two pointer
        int l=0;
        int r=height.size()-1;
        int lmax=0;
        int rmax=0,sum=0;
        while(l<=r){
            if(height[l]<=height[r]){
                if(height[l]>=lmax) lmax=height[l];
                else sum+=lmax-height[l];
                l++;
            }
            else{
                if(height[r]>=rmax)rmax=height[r];
                else sum+=rmax-height[r];
                r--;
            }
        }
  
  cout<<sum;
  
    return 0;
}
