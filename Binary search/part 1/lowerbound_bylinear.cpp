//by leanear search;
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,4,5,9,15,18,21,24};
    int n = 9;
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    int x =20;
    cout<<endl;
    for(int i = 0;i<n ; i++){
        if(arr[i]>x){
            cout<<arr[i-1];
            break;
        }
    }
}