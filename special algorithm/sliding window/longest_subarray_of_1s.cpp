#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] ={1,1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 1;
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

    cout<<max_len - 1 ;
}