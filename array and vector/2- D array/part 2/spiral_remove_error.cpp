

///error in code



#include<iostream>
#include<vector>
using namespace std;
int main(){
        int m, n ;
        
        cout<<"\nEnter number of rows in matrix : ";
        cin>>m;
        cout<<"Enter number of coloum in matrix : ";
        cin>>n;
        int check = m+n;
        int count = 0;

    int arr [m][n];
        cout<<"Enter the elements of matrix : \n";
        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ; j<n ; j++){
                cin>>arr[i][j];
            }
        }
        cout<<endl;
        cout<<"You entered  matrix : \n";
        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ; j<n ; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        //spiral print 
        cout<<"Spiral print \n";
        int min_row = 0 ;       // i for rows and j for colums
        int min_col = 0 ;
        int max_row = m-1 ;
        int max_col = n-1 ;
        while(min_row<=max_row && min_col<=max_col){
            
            //left moving
            for(int j=min_col ; j<=max_col , count<check ; j++){
                cout<<arr[min_row][j]<<" ";
                count++;
            }
            min_row++;
            
            
            //dorn moving
            for(int i=min_row ; i<=max_row , count<check ; i++){
                cout<<arr[i][max_col]<<" ";
                count++;
            }
            max_col--;
           

            //right moving
            for(int j=max_col ; j>=min_col , count<check ; j--){
                cout<<arr[max_row][j]<<" ";
                count++;
            }
            max_row--;
            

            //up moving
            for(int i=max_row ; i>=min_row , count<check ; i--){
                cout<<arr[i][min_col]<<" ";
                count++;
            }
            min_col++;
            
        }

}