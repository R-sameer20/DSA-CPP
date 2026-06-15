#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] ={1,0,1,1,0,0,0,1,1,1,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    int i = 0 , j = 0 , flip = 0 ;
    int max_len = INT16_MIN , len = INT16_MIN;
    while(j<n){
        if(arr[j]==1) j++;
        else{
            if(flip<k){
                flip++;
                j++;
            }
            else{
                len = j-i;
                max_len = (max_len , len);
                while(arr[i]==1) i++;
                i++;
                j++;
            } 
        }
    }

    len = j-i;
    max_len = (max_len , len);
    cout<<max_len;

    

    //my code
    // int j = 0;
    // int i = 0;
    // int len = 0;
    // while(j<n){
    //     int max_len = len;
    //     if(arr[j]==1) j++;
    //     if(arr[j]==0){
    //         k--;
    //         j++;
    //     }
    //     if(k==0){
    //         max_len=j-i;
    //         i = j;
    //         k = 2;
    //     }
    //     len = max(max_len,len);
       
        

    // }
    // cout<<len;
    
}