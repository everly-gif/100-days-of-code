/******************************************************************************
Juggling Algorithm
Time complexity : O(n)
Space Complexity : O(1)

*******************************************************************************/

#include <iostream>

using namespace std;

int gcd(int a,int b){
    if (b==0){
        return a;
    }
    else
    return gcd(b,a%b);
}
void leftrotate(int ar[],int n,int k){
    int i,j,temp,d;
    for (i=0;i<gcd(n,k);i++){
        j=i;
        temp=ar[i];
        while(1){
            d=(j+k)%n;
            if(d==i)
            break;
            ar[j]=ar[d];
            j=d;
        }
        ar[j]=temp;
    }
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
