#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // // division operator is used
    // int product = 1;
    // for(int i = 0 ; i<n ; i++){
    //     if(arr[i]==0){
    //         product*=1;
    //     }
    //     else if(arr[i]<0){
    //         product*=((-1)*arr[i]);
    //     }
    //     else{
    //         product*=arr[i];
    //     }
        
    // } 
    // for(int i = 0 ; i<n ; i++){
    //     if(arr[i]==0){
    //        arr[i]=product;
    //     }
    //     else if(arr[i]<0){
    //         arr[i]=product/((-1)*arr[i]);
    //     }
    //     else{
    //          arr[i]=(product/arr[i]);
    //     }
       
    // }
    // for(int i = 0 ; i<n ; i++){
    //     cout<<arr[i]<<" ";
    // }

    // leet solution 3 extra aray used
    // int p = arr[0];
    // int pre[n];
    // int suf[n];
    // int ans[n];
    // pre[0]=1;
    // for(int i = 0 ; i<n ; i++){
    //     pre[i]=p;
    //     p*=arr[i];
    // }
   
    // p = arr[n-1];
    // suf[n-1]=1;
    // for(int i = n-2 ; i>=0 ; i--){
    //     suf[i]=p;
    //     p*=arr[i];
    // }

    // for(int i = 0 ; i<n ; i++){
    //     ans[i]=pre[i]*suf[i];
    // }
    // for(int i = 0 ; i<n ; i++){
    //     cout<<ans[i]<<" ";
    // }
    // cout<<endl;

    // only one extra array used
    int p = arr[0];
    int pre[n];
    pre[0]=1;
    for(int i = 0 ; i<n ; i++){
        pre[i]=p;
        p*=arr[i];
    }
   
    p = arr[n-1];
    for(int i = n-2 ; i>=0 ; i--){
        pre[i]*=p;
        p*=arr[i];
    }
    for(int i = 0 ; i<n ; i++){
        cout<<pre[i]<<" ";
    }
    cout<<endl;
}