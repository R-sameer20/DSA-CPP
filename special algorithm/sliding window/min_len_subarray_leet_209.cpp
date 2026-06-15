#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,1,2,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int tar = 7 ;
    int min_len = INT16_MAX;
    int len = 0;
    int sum = 0;
    int i = 0;
    int j = 0;
    
    while(j<n){
        sum+=arr[j];
        while(sum>=tar){
            len = j-i+1;
            min_len = min(min_len , len);
            sum-=arr[i];
            i++;
        } 
        j++;
    }
    if(min_len==INT16_MAX) cout<<"No such min len subarray ";
    else cout<<min_len;



//     int Idx = 0;
//     for(int i = 0 ; i<n ; i++) {
//         sum+=arr[i];
//         if(sum>=tar){
//             Idx = i;
//             break;
//         }
//     }
//     int min_len = Idx+1;
//     int i = 0;
//     int j = Idx;
//     while(j<n){
//         int temp_len = -1;
//         sum +=(sum + arr[j]-arr[i-1]);

//         if(sum>tar){
//             int p = j;
//             for(int x = p ; x>=i ; p--){
//                 sum-=arr[x];
//                 if(sum<=tar){
//                     temp_len = j-i+1;
//                     break;
//                 }
//             }
//             min_len = min(temp_len,min_len);
//         }
//         i++;
//         j++;

//     }
//     cout<<min_len;
 }