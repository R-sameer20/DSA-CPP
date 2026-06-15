#include<iostream>
#include<vector>
using namespace std ;
int main(){

    int m , n ;
    cout<<"\n\nEnter number of rows : ";
    cin>>m;
    cout<<"Enter number of colums : ";
    cin>>n;
   
    int arr [m][n];
    
    cout<<"Enter the matrix : \n";
        for(int i=0 ; i<=m-1 ; i++){
            for(int j=0 ; j<=n-1 ; j++){
                cin>>arr[i][j];
        }
    }

    cout<<"\nthe entered matrix element : \n";
        for(int i=0 ; i<=m-1 ; i++){
            for(int j=0 ; j<=n-1 ; j++){
                cout<<arr[i][j]<<" ";
    }
        cout<<endl;
    }

    for(int i = 0 ; i<m ; i++){
        for(int j = i+1; j<n ; j++){
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
    }
   }

    cout<<"\nthe transposed matrix : \n";
        for(int i=0 ; i<=m-1 ; i++){
            for(int j=0 ; j<=n-1 ; j++){
                cout<<arr[i][j]<<" ";
    }
        cout<<endl;
    }

    //reverse the each row

    for(int k = 0 ; k<m ; k++){
        for(int i = 0 , j = m-1 ; i<=j ; i++ , j--){
            
            int temp = arr[k][i];
            arr[k][i]=arr[k][j];
            arr[k][j]=temp;

        }
    }

    cout<<"\nthe 90 degree rotated matrix matrix : \n";
        for(int i=0 ; i<=m-1 ; i++){
            for(int j=0 ; j<=n-1 ; j++){
                cout<<arr[i][j]<<" ";
    }
        cout<<endl;
    }
}