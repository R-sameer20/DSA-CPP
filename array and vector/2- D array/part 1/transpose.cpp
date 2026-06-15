#include<iostream>
#include<vector>
using namespace std ;
int main(){

    int m , n ;
    cout<<"\n\nEnter number of rows : ";
    cin>>m;
    cout<<"Enter number of colums : ";
    cin>>n;
   
    int arr1 [m][n];
    int arr2 [n][m];
    cout<<"Enter the matrix : \n";
    for(int i=0 ; i<=m-1 ; i++){
    for(int j=0 ; j<=n-1 ; j++){
        cin>>arr1[i][j];
    }
   }
    cout<<"\nthe matrix 1 : \n";
    for(int i=0 ; i<=m-1 ; i++){
    for(int j=0 ; j<=n-1 ; j++){
        cout<<arr1[i][j]<<" ";
    }
    cout<<endl;
   }

    for(int i = 0 ; i<n ; i++){
    for(int j = 0 ; j<m ; j++){
        arr2[i][j]=arr1[j][i];
    }
   }

    cout<<"\nthe transpose matrix  : \n";
    for(int i=0 ; i<=m-1 ; i++){
    for(int j=0 ; j<=n-1 ; j++){
        cout<<arr2[i][j]<<" ";
    }
    cout<<endl;
   }
}