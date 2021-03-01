/******************************************************************************
Block Swap Algorithm
Time complexity : O(n)

*******************************************************************************/

#include <iostream>

using namespace std;

void swap(int ar[],int f,int l,int d){
    int temp;
    for(int i=0;i<d;i++){
    temp=ar[f+i];
    ar[f+i]=ar[l+i];
    ar[l+i]=temp;
    }
}
void leftrotate(int ar[],int n,int d){
    if (d==0|| d==n){
        return;
    }
    int i=d;
    int j=n-d;
    while(i!=j){
        if(i<j){
            swap(ar,d-i,d+j-i,i);
            j=j-i;
        }
        else{
            swap(ar,d-i,d,j);
            i=i-j;
            }
    }
    swap(ar,d-i,d,i);
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