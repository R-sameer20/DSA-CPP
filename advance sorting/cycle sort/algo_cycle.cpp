#include<iostream>
using namespace std;
int main(){
    int arr[]={9,3,2,4,6,8,7,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<n ; i++){
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i = 0;
    while(i<n){
        int correctInx = arr[i] - 1;
        if(i==correctInx) i++;
        else swap(arr[i],arr[correctInx]);
    }
    for(int i = 0 ; i<n ; i++){
       cout<<arr[i]<<" ";
    }

}