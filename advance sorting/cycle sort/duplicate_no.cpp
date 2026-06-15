#include<iostream>
using namespace std;
int main(){
    int arr[]={2,6,5,5,4,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    // self written
    // while(i<n){
    //     int correctIdx = arr[i];
    //     if(correctIdx==i+1 || arr[i]==n) i++;
    //     else {
    //         if(arr[i]==arr[correctIdx]){ 
    //             cout<<arr[i] ;
    //             return 0;
    //         }
    //         else swap(arr[i],arr[correctIdx]) ;
    //     }
    // }

    // sir written
    while(i<n){
        int correctIdx = arr[i];
        if(arr[i]==arr[correctIdx]){ 
                cout<<arr[i] ;
                return 0;
            }
            else swap(arr[i],arr[correctIdx]) ;
        }
   


}