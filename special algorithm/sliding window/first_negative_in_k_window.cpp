#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,-3,4,4,-7,-1,4,-2,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 5;
    int ans[n-k+1];
    //optimize solution
    int p = -1; //index of negative number
    for(int i = 0 ; i<k ; i++){
        if(arr[i]<0){
            p=i;
            break;
            }
    }
    if(p==-1) ans[0] = 1;
    else ans[0] = arr[p];

    int i = 0;
    int j = k;
    while(j<=n){
        if(p>=i) ans[i] = arr[p];
        else{
            p = -1;
            for(int x=i ; x<=j ; x++){
                if(arr[x]<0){
                    p = x;
                    break;
                }    
            }
            if(p!=-1) ans[i]=arr[p];
            else ans[i] = 1;
            
        }
        i++;
        j++;
    }

    for(int i = 0 ; i<n-k+1 ; i++){
        cout<<ans[i]<<" ";
    }
    
    // solution by brute force homework self written
    // for(int i = 0 ; i<=n-k ; i++){
    //     for(int j = i ; j<i+k ; j++){
    //         if(arr[j]<0){
    //             ans[i]=arr[j];
    //             break;
    //         }
    //     }
    // }
    // for(int i = 0 ; i<n-k+1 ; i++){
    //     cout<<ans[i]<<" ";
    // }
}