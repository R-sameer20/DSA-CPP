#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[7]={7,6,5,4,3,2,1};
    // for(int i = 0 ;i<7 ; i++){
    //     cout<<arr[i]<<" ";
    // }
    bool flag = true;
    int n = 7;
    for(int i = 0 ; i<n-1 ; i++){
        for(int i = 0 ; i,n-1 ;i++){
            if(arr[i]>arr[i+1]){
            flag=false;
            break;
            }
        }
        if(flag==true){
            cout<<"\nsorted :";
            break;
        }
        else{
            for(int j = 0 ; j<n-1-i ; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
        }
     

    }
    cout<<endl;
     for(int i = 0 ;i<7 ; i++){
        cout<<arr[i]<<" ";
    }
   

}