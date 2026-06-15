#include<iostream>
#include<vector>
#include<limits>
#include<algorithm>
using namespace std;
void printmax(int arr[],int n,int idx,int max){
    if(idx==n){
        cout<<max;
        return; 
    }
    if(max<arr[idx]){
        max = arr[idx];
        printmax(arr , n , idx+1 , max);
    }
}

int maxinarray(int arr[],int n,int idx){
    if(idx==n){ 
        return INT8_MIN;
    }
    return max(arr[idx],maxinarray(arr, n , idx+1));

    
}

int main(){
    int arr[]={2,5,89,6,5,4,7,8,9,6,5,41,1,2,5,5,6,5,2,0,5,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    printmax(arr,n,0,INT16_MIN); 

    cout<<maxinarray(arr,n,0);
}