#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void  print (int arr[] , int n){
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void bubbleSort(int arr[] , int n){
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<(n-i-1) ; j++){
            if(arr[j] > arr[j+1]) swap(arr[j] , arr[j+1]);    
        }
    }

}

void selectionSort(int brr[] , int n){
    for(int i = 0 ; i<n ; i++){
        int mn = INT16_MAX ;
        int mnIdx = -1 ;
        for(int j = i ; j<n ; j++){
            if( brr[j] < mn ){
                mn = brr[j];
                mnIdx = j;
            } 
        }
        swap(brr[i] , brr[mnIdx]);    
    }
}

void IntertionSort(int crr[], int n){
    for(int i = 1 ; i<n ; i++){
        for(int j = i ; j>0 ; j--){
            if(crr[j] < crr[j-1]){
                swap(crr[j] , crr[j-1]);
            }
            else break;
        }
    }

}
int main(){
    int arr[] = {-1,3,1,88,-9,-3,-87,100};
    int n = sizeof(arr) / 4;
    
    print(arr,n);
    cout<<"bubble : ";
    bubbleSort(arr , n);
    print(arr,n);

    int brr[] ={-1,3,1,88,-9,-3,-87,100};
    cout<<"selection : ";
    selectionSort(brr , n);
    print(brr,n);

    int crr[] ={-1,3,1,88,-9,-3,-87,100};
    cout<<"Insertion : ";
    IntertionSort(crr , n);
    print(brr,n);




}