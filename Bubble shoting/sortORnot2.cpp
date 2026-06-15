#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[7]={7,1,2,3,4,5,6};
    bool flag = true;
    int n = 7;
    for(int i = 0 ;i<n-1 ; i++){
        if(arr[i]>arr[i+1]){
            flag=false;
            break;
        }
        
    }
    if(flag == true){
         cout<<"\n sorted\n";
            for(int i = 0 ;i<n-1 ; i++){
             cout<<arr[i]<<" ";
            }
    }
    else{
          cout<<"\nNot sorted\n";
            for(int i = 0 ;i<n-1 ; i++){
             cout<<arr[i]<<" ";
            }
    }
    

}