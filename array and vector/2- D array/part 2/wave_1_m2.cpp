#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m, n ;
        cout<<"\nEnter number of rows in matrix : ";
        cin>>m;
        cout<<"Enter number of coloum in matrix : ";
        cin>>n;

    int test [m][n];
        cout<<"Enter the elements of matrix : \n";
        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ; j<n ; j++){
                cin>>test[i][j];
            }
        }

        cout<<"You entered  matrix : \n";
        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ; j<n ; j++){
                cout<<test[i][j]<<" ";
            }
            cout<<endl;
        }
        //wave print 
        cout<<"Wave form of matrix : \n";
        for(int i=0 ; i<m ; i++){
            if(i%2==0){
                for(int j = 0 ; j<n ; j++){
                    cout<<test[i][j]<<" ";
                }
                cout<<endl;
            }
            else{
                for(int j=n-1 ; j>=0 ; j--){
                    cout<<test[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        // cout<<"Wave form of matrix : \n";
        // for(int i = 0 ; i<m ; i++){
        //     for(int j = 0 ; j<n ; j++){
        //         cout<<test[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
            

}