#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,2,3,4,9,7,8,9};
    int n = 8;
    int low = 0;
    int high = n-1;
    int ans = -1;
    int mid = 0;
    while(low<=high){
        mid=low + (high-low)/2;
        if(arr[mid]==mid){
            low=mid+1;
        }
        else{
            ans=mid;
            high=mid-1;
        }
        
    }
    cout<<"The missing element is "<<ans;
}