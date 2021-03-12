#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int m,n;
    cin>>m>>n;
    int ar[m][m];
    int ar1[n][n];
    for(int i=0;i<m;i++){
      for(int j=0;j<m;j++){
        cin>>ar[i][j];
      }
    }
     for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cin>>ar1[i][j];
      }
    }
    //addition of matrix
    int sum[n][n];
     for(int i=0;i<m;i++){
      for(int j=0;j<m;j++){
        sum[i][j]=ar[i][j]+ar1[i][j];
      }
    }
    //multiplication of matrix
    int mul[n][n];
     for(int i=0;i<m;i++){
      for(int j=0;j<m;j++){
        mul[i][j]=0;
        for(int k=0;k<m;k++){
        mul[i][j]+=ar[i][k]*ar1[k][j];
        }
      }
    }
     for(int i=0;i<m;i++){
      for(int j=0;j<m;j++){
        cout<<sum[i][j]<<" ";
      }
      cout<<endl;
    }
