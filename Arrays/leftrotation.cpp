/******************************************************************************
Program for array rotation
time complxeiy :
*******************************************************************************/

#include <iostream>

using namespace std;

void leftroatebyone(int arr[], int n){
    int temp=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}
void leftrotation(int arr,int n,int d){
    for(int i=0;i<d;i++){
        leftroatebyone(arr,n);
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int n,d,arr[20];
    cin>>n>>d;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    leftrotation(arr, n, d);
    printArray(arr, n);

    return 0;
}
