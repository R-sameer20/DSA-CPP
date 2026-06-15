#include<iostream>
using namespace std;
int main(){
    int arr[]={9,6,4,2,3,5,7,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    while(i<n){
        int correctIdx = arr[i];
        if(correctIdx==i || arr[i]==n) i++;
        else swap(arr[i],arr[correctIdx]);
    }
    for(int i = 0 ; i<n ; i++){
        if(i!=arr[i]){
            cout<<i;
            return i;
        }
    }
}