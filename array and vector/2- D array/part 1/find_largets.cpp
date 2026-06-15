#include<iostream>
#include<vector>
#include<limits>
using namespace std;
int main (){
   
   int m , n ;
   cout<<"Enter number of rows : ";
   cin>>m;
   cout<<"Enter number of colums : ";
   cin>>n;
   int arr [m][n];
   cout<<"\nEnter the matrix : \n";
   for(int i=0 ; i<=m-1 ; i++){
    for(int j=0 ; j<=n-1 ; j++){
        cin>>arr[i][j];
    }
   }
   cout<<"\nthe matrix : \n";
   for(int i=0 ; i<=m-1 ; i++){
    for(int j=0 ; j<=n-1 ; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
  int check=INT16_MIN;
  int k=0;
   
   cout<<"\n\nThe max in given matrix : \n";
   for(int i = 0 ; i<=m-1 ; i++){
    for(int j = 0 ; j<=n-1 ; j++){
        if(arr[i][j]>check){
            k=arr[i][j];
            check = arr[i][j];
        }
    }
   }
   cout<<k;
}