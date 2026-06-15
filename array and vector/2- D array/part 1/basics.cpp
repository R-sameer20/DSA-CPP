#include<iostream>
#include<vector>
using namespace std;
int main (){
   
   int arr1[5][5]={{1,5,8,9,5},{1,36,87,25,51},{17,5,18,89,53},{17,51,48,659,2585},{11,555,128,789,655},};
    cout<<"\nthe matrix  1 : \n";
   for(int i=0 ; i<=4 ; i++){
    for(int j=0 ; j<=4 ; j++){
        cout<<arr1[i][j]<<" ";
    }
    cout<<endl;
   } 
    int arr2[3][3]={5,8,9,6,8,5,2,3,6};
    cout<<"\nthe matrix  2 : \n";
   for(int i=0 ; i<=2 ; i++){
    for(int j=0 ; j<=2 ; j++){
        cout<<arr2[i][j]<<" ";
    }
    cout<<endl;
   }
   int m , n ;
   cout<<"\n\nEnter number of rows of matrix 2: ";
   cin>>m;
   cout<<"Enter number of colums of matrix 2 : ";
   cin>>n;
   int arr [m][n];
   cout<<"Enter the matrix : \n";
   for(int i=0 ; i<=m-1 ; i++){
    for(int j=0 ; j<=n-1 ; j++){
        cin>>arr[i][j];
    }
   }
   cout<<"\nthe matrix 1 : \n";
   for(int i=0 ; i<=m-1 ; i++){
    for(int j=0 ; j<=n-1 ; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }

} 