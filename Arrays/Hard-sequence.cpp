#include <iostream>
using namespace std;

int main() {
    int arr[129];
    int visited[256];
    for(int i=0;i<256;i++){
        visited[i]=0;
    }
    arr[1]=0;
    for(int i=2;i<129;i++){
        if(visited[arr[i-1]]!=0){
            arr[i]=(i-1)-visited[arr[i-1]];
        }
        else
        arr[i]=0;
        
        visited[arr[i-1]]=i-1;
        
    }
    int n,value,count=0;;
    cin>>n;
    while(n--){
        cin>>value;
        count=0;
        for(int i=0;i<=value;i++){
        
        if(arr[value]==arr[i]){
            count++;
        }
        }
        cout<<count<<endl;
    }
    
	return 0;
}
