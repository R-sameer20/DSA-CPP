
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,2,3,3,3,3,3,4,4,5,5,8,9};
    int n = 14;
    int x=20; //can be any value
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int low = 0;
    int high = n-1;
    bool flag = false;
    cout<<endl;
    while(low<=high){
        int mid = low + (high - low)/2;
        if(arr[mid]==x){
            if(arr[mid-1]!=x){
                flag = true;
                cout<<mid;
                 break;
            }
            else{
                high = mid-1;
            } 
        }
        else if(arr[mid]<x){
            low=mid+1;
        }
        else{
            high =mid-1;
        }
    }
    if(flag==false){
        cout<<"not present :";
    }
    
}