#include<iostream>
using namespace std;

int main(){
    int n = 3;
    int arr[][n] = {1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1};
    int i = 0 ; 
    int j = n;
    while(i<n){
        if(arr[i][j]==0){
            int a = i;
            int b = j;
            i = 0;
            while(i<n){
                arr[i][n-j];
                i++;
            }
            i = a;
            j =0;
            while(j<n){
                arr[i][j]=0;
                j++;
            }
            i = a; 
            j = b;
            j--;
            
            
        }
        i++;
        
    }
    

    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j< n ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

    
}