// sliding window approach 1 O(N)
// Max sum in sub array
#include <iostream>
#include <climits>
using namespace std;
int maxSubArray(int ar[], int n,int k){
    int cursum=0, maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        cursum+=ar[i];
        if(i>=(k-1)){
            maxsum=max(cursum,maxsum);
            cursum-=ar[i-(k-1)];
        }
    }
    return maxsum;
}

int main() {
 int ar[]={4,2,1,7,8,1,2,8,1,0};
 int k=3;
 int n=sizeof(ar)/sizeof(ar[0]);
 int Maxsum=maxSubArray(ar,n,k);
 cout<<Maxsum;
 return 0;
}
//Output=16
