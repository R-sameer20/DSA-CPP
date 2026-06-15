#include<iostream>
#include<vector>
using namespace std ;
int main(){
        int m, n ;
        cout<<"\nEnter number of rows in matrix : ";
        cin>>m;
        cout<<"Enter number of coloum in matrix : ";
        cin>>n;

    int arr[m][n];
        cout<<"Enter the elements of matrix : \n";
        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ; j<n ; j++){
                cin>>arr[i][j];
            }
        }

        cout<<"You entered  matrix : \n";
        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ; j<n ; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"coloum wise print \n";
        // coloum wise printing 
        for(int j = 0 ;j<n ;j++){
            for(int i = 0 ; i<m;i++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }

          cout<<"coloum wise print \n";
        // coloum wise printing 
        for(int j = 0 ;j<n ;j++){
            for(int i = 0 ; i<m;i++){
                cout<<arr[i][j]<<" ";
            }
            
        }
    }
