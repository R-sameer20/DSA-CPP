#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] ={10,5,2,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 100;
    int i = 0 ,j = 0;
    int pro = 1;
    int count = 0;

    while(j<n){
        pro*=arr[j];
        while(pro>=k){
            count += (j-i);
            pro /= arr[i];
            i++;
        }
        j++;
    }
    while(i<n){
            count += (j-i);
            pro /= arr[i];
            i++;
        }
        cout<<count;

    //mycode
    // if(k<=1){
    //     cout<<0;
    //     return 0;
    // }
    // while(j<n){
    //     pro*=arr[j];
    //     if(arr[j]<k){
    //         count++;
    //     } 
    //     if(pro<k){
    //         count++;
    //     }
    //     if(pro>=k){
    //         while(pro<=k){
    //             pro/=arr[i];
    //             i++;
    //         }
    //     }
    //     j++;

    // }
    // cout<<count;


   
}