#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={2,7,3,1,5,8,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i = 1 ; i<n ; i++){
        arr[i]+=arr[i-1];
    }
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    //check mine
    // int check = 0;
    // int i=0 , j=(n-1);
    // while(i<=j){
    //     if( arr[i]= (arr[j]-arr[i]) ){
    //         check = i;
    //         break;
    //     }
    //     else i++;
    // }
    // if(check == 0) cout<<"no such index ";
    // else cout<<endl<<check;
    bool flag = false;
    int check = 0;
    int i = 0;
    for( i = 0 ; i<n ; i++){
        if((2*arr[i])==arr[n-1]){ 
        flag = true;
           check = i;
        break;
        }
    }
    if(flag==false) cout<<"cant";
    else{ 
        cout<<i;
    }
}