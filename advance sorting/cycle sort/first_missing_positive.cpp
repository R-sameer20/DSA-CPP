#include<iostream>
using namespace std;
int main(){
    int arr[]={7,8,9,11,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    while(i<n){
        int correctIdx = arr[i] - 1 ;
        if(arr[correctIdx]==i+1 || arr[i]>n || arr[i]<=0) i++;
        else swap(arr[i],arr[correctIdx]);
    }
    for(int i = 0 ; i<n ; i++){
        if(arr[i]!=i+1){
            cout<<i+1;
            break;
        }
    }
}