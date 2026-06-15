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
    
   
   //taking transpose 


    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<m ; j++){
            arr2[i][j]=arr1[j][i];
        }
   }

    cout<<"\nthe transpose matrix  : \n";
        for(int i=0 ; i<=n-1 ; i++){
            for(int j=0 ; j<=m-1 ; j++){
                cout<<arr2[i][j]<<" ";
            }
                cout<<endl;
        }


    
   
   //rotating matris 
    for(int k = 0 ; k<n ; k++){
        for(int i = 0 , j = m-1 ; i<=j ; i++ , j--){
            int temp = arr2[k][i];
            arr2[k][i] = arr2[k][j];
            arr2[k][j] = temp;
        }
    }

   
    cout<<"\nthe 90 degree rotated matrix  : \n";
        for(int i=0 ; i<=n-1 ; i++){
            for(int j=0 ; j<=m-1 ; j++){
                cout<<arr2[i][j]<<" ";
            }
                cout<<endl;
        }
}