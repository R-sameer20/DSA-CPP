#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void find_unique(int arr[] , int n){
    int res = 0;
    for(int i = 0 ; i<n ; i++) res ^=arr[i];
    int temp = res ;
    int k = 0;
    while(true){
        if((temp & 1 ) == 1){
            break;
        }
        temp = temp >> 1;
        k++;
    }
    int retvel = 0 ;
    for(int i = 0 ; i<n ;i++){
        int num = arr[i];
        if(((num >> k) & 1) == 1) retvel^=num;
    }
    cout<<retvel<<endl;
    res = retvel^res;
    cout<<res<<" ";
}
int main(){
    int arr[]={1,2,1,3,2,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    find_unique(arr,n);
}