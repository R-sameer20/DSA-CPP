#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={2,1,3,2,1,5,5,6,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = 0;
    for(int i = 0 ; i<n ; i++){
       result = result^arr[i];
    }
    cout<<result<<endl;

    vector<int> v(arr,arr+n);
    sort(v.begin(),v.end());
    int temp = v[0];
    for(int i = 1 ; i<n ; i++){
        temp=temp^v[i];
    }
    cout<<temp;   
}