#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,4,5,3,2,7,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    // vector<int> v (arr,arr+n);
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int presum[n];

    //TC=O(n) and SC=O(n);
    presum[0]=arr[0];
    for(int i = 1 ; i<n ; i++){
        presum[i]=(presum[i-1]+arr[i]);
    }
    for(int i = 0 ; i<n ; i++){
        cout<<presum[i]<<" ";
    }
    cout<<endl;


    //TC=O(n) and no extra space used hence O(1);
    for(int i = 1 ; i<n ; i++){
        arr[i]+=arr[i-1];
    }
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}