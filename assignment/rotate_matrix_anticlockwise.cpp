#include<iostream>
using namespace std;
int main(){
    int n = 3;
    int arr[][n]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    
    

    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<n ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<endl;
    int i = 0; 
    int j = 0; 
    while(i<n){
        j = 0;
        while(j<(n/2)){
            swap(arr[i][j],arr[i][n-j-1]);
            j++;
        }
        i++;
    }
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<n ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i = 0 ; i<n ; i++){
        for(int j = i+1 ; j<n ; j++){
            swap(arr[i][j] , arr[j][i]);
        }
    }
    cout<<endl<<endl;
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<n ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}