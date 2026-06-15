#include<iostream>
using namespace std;
void display(int arr[] , int n){
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr , n);
}   