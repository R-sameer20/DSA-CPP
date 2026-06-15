#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[7]={7,6,5,4,3,2,1};
    for(int i = 0 ;i<7 ; i++){
        cout<<arr[i]<<" ";
    }
    int n = 7;
    for(int i = 0 ; i<n-1 ; i++){
        for(int j = 0 ; j<n-1 ; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
    cout<<endl;
     for(int i = 0 ;i<7 ; i++){
        cout<<arr[i]<<" ";
    }
   

}