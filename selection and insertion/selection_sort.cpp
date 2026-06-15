#include<iostream>
#include<limits>

using namespace std;
int main(){
    //self written selection sort
     cout<<"written by self : "<<endl;
    int arr[]={5,3,1,4,2,9,8,7};
    int n=8;
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    for(int i = 0 ; i<n ; i++){
        int min=arr[i];
        for(int j = i ; j<n ; j++){
                if(arr[j]<min){
                    int temp = min;
                    min=arr[j];
                    arr[j]=temp;
                }
        }
        int temp = arr[i];
        arr[i]=min;
        min=temp;
    }
    cout<<endl;
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
    //sir writtem
    cout<<"written by sir : "<<endl;
    int arr1[]={550,2,3,99,58,4,1,0};
    int m=8;
    for(int i = 0 ; i<m ; i++){
        cout<<arr1[i]<<" ";
    }
    for(int i = 0 ; i<m-1 ; i++){
        int min=INT16_MAX;
        int mindx = -1 ;
        for(int j = i ; j<m ; j++){
                if(arr1[j]<min){
                    min = arr1[j];
                    mindx=j;
                }
        }
        swap(arr1[i],arr1[mindx]);
    }
    cout<<endl;
     for(int i = 0 ; i<m ; i++){
        cout<<arr1[i]<<" ";
    }
    
}