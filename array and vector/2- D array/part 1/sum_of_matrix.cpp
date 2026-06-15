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
   int k = 0 ;
    for(int i=0 ; i<=m-1 ; i++){
    for(int j=0 ; j<=n-1 ; j++){
        k+=arr[i][j];
    }
   }
   cout<<"\n\nSum of 2-D Matrix : "<<k;

}