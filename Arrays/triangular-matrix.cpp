#include <bits/stdc++.h>
  using namespace std;
  
  int main()
  {
    int m, n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
        cin>>arr[i][j];
      }
    }
    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
        if(i>=j){
          cout<<arr[i][j]<<" ";
        }
        else{
          cout<<0<<" ";
        }
      }
      
      cout<<endl;
    }
    
    //Lower half
    
    for(int i=0;i<m;i++){
      for(int j=0;j<n;j++){
        if(i>j){
          cout<<0<<" ";
        }
        else{
          cout<<arr[i][j]<<" ";
        }
      }
      
      cout<<endl;
    }
    
    
    return 0;
  }
