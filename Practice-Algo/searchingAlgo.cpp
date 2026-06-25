#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void binarySearch(int arr[] , int n , int target){
    int  lo = 0;
    int hi = n-1;

    while (lo<=hi){
        int mid = lo + ((hi-lo) /2);
        if(arr[mid] == target){
            cout<<"Present\n";
            return;
        }
        if(arr[mid] < target) lo = mid+1;
        else hi = mid - 1;


    }
    cout<<"Not-Present\n";
    return;
    
    
}

int main(){
    int arr[] = {1,2,5,6,9,11,15,18,22,25,29,30,35,38,39,40};
    int n = sizeof(arr) / 4;
    int target = 1;
    binarySearch(arr , n , target );
    
    




}