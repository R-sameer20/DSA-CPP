#include<iostream>
#include<vector>
using namespace std;

int main (){
   int m , n ;
   cout<<"\n\nEnter number of rows : ";
   cin>>m;
   cout<<"Enter number of colums : ";
   cin>>n;
   int arr1 [m][n];
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
       
//     int i = 0 , j = 0 ;     //for original matrix
//     int p = 0 , q = 0 ;     //for transpose matrix
//   while(i<m , j<n , p<m , q<n  ){


//   }
    int arr2[m][n];
    int i = 0 , j = 0 ;     
    int p = 0 , q = 0 ; 
    while(i<m && q<n){
        { 
            if(i==p && j==q){
                arr1[i][j]=arr2[p][q];
                j++;
                q++;
            
            }
            else{
                for(j = 0 , p = 0 ; j<n , p<m ; j++ , p++){
                    arr1[i][j]=arr2[p][q];
                }
                 i++;
                q++;
            }
            

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