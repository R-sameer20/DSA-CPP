//order of n
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,8,9,10,15,20};
    int n = 9;
    for(int i = 0 ; i<n ;i++){
        if(arr[i+1]!=arr[i]+1){
            cout<<"the missing element is "<<arr[i]+1<<" at index "<< i+1;
            break;
        }

    }
    cout<<endl;
    cout<<"\nmethod 2\n ";
    for(int i = 0 ; i<n ;i++){
        if(i!=arr[i]){
            cout<<"the missing element is "<<arr[i]+1<<" at index "<< i+1;
            break;

        }
    }
    
}