#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int arr[]={28,33,39,42,49,55,68,77,90,102,1,2,8,15,22,27};
int n = 16;
int low = 0 ;
int high = n-1;
int pivot = -1;
int target;
cout<<"Enter the target : ";
cin>>target;
if(n==2){
    if(target ==arr[0]) cout<<"present";
    else if(target == arr[1]) cout<<"present";
    else cout<<"not present";
}
while(low<=high){
    int mid = low + (high - low)/2;
    if(mid==0) low = mid+1;
    else if(mid ==n-1) high = mid -1;
    if(arr[mid]<arr[mid+1]&& arr[mid]<arr[mid-1]){
        pivot = mid;
        break;
    }
    else if (arr[mid]>arr[mid+1]&& arr[mid]>arr[mid-1]){
        pivot = mid=1;
        break;
    }
    else if (arr[mid]>arr[high]){
        low = mid +1;
    }
    else{
        high = mid -1;
    }
}
    if(target>arr[0] && target<=arr[pivot-1]){
        low = 0;
        high = pivot - 1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(arr[mid]==target){
                cout<<"\n\npresent";
                break;
            }
            else if(arr[mid]>target){
                high = mid - 1;
            }
            else{ 
                low = mid +1;

            }
        }
    }
    else{
        low = pivot;
        high = n - 1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if(arr[mid]==target){
                cout<<"\n\npresent";
                break;
            }
            else if(arr[mid]>target){
                high = mid - 1;
            }
            else{ 
                low = mid +1;
            }
        }
    }

}