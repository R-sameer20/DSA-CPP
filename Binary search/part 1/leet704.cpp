#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={2,8,6,33,4,70,74,3,-9,2,-999,-58,-63,6845,2158,3585};
    int n = 16;
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    for(int i = 0 ; i<n-1 ; i++){
        bool check = true;
        for(int j=0;j<n-1-i ; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                check = false;
            }
        }
    }
    cout<<endl;
       for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int target;
    cout<<"Enter the target : ";
    cin>>target;
    int low = 0;
    int high = n-1;
    int mid=0;
    bool check=false;
    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid]==target){
            //cout<<endl<<"index of required target is "<<mid;
            check=true;
            break;
        }
        else if (arr[mid]>target)
        {
           high = mid-1;
        }
        else{
            low =mid+1;
        }
        
    }
    if(check==true){
            cout<<endl<<"index of required target is "<<mid;
        }
        else{
            cout<<endl<<"element is not present";
        }
   
   
}