/******************************************************************************
Reversal Algorithm for rotation
Time complexity : O(n)


*******************************************************************************/

#include <iostream>

using namespace std;

void reverse(int arr[],int start,int end){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void leftrotate(int ar[],int n,int k){
   if(k==0){
       return;
   }
   k=k%n; //to make sure input is within bound
   reverse(ar,0,k-1);
   reverse(ar,k,n-1);
   reverse(ar,0,n-1);
}
int main()
{
    int n,k;
    cin>>n>>k;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    leftrotate(ar,n,k);
     for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    
    return 0;
}