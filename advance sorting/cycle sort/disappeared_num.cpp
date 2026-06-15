#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={4,3,2,7,8,2,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> disapper(0,n);
    int i = 0;
    while(i<n){
        int correctIdx = arr[i]-1;
        if( arr[i]==arr[correctIdx] || correctIdx==i ) i++;
        else swap(arr[i],arr[correctIdx]);
    }
    for(int i = 0 ; i<n ; i++){
        if(arr[i]!=i+1) disapper.push_back(arr[i]);
    }
    for(int i = 0 ; i<disapper.size();i++){
        cout<<disapper[i]<<" ";
    }
}