
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,4,5,9,15,18,21,24};
    int n = 9;
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    int x=20;
    cout<<endl;
    int low = 0;
    int high = n-1;
    bool flag = false;
    cout<<endl;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==x){
            flag = true;
            cout<<arr[mid-1];
            break;
        }
        else if (arr[mid]<x)
        {
           low = mid+1; 
        }
        else{
            high = mid -1;
        }
        
    }
    if(flag==false){
        cout<<arr[high];
    }
}