#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a [4][4]={{1,2,5,9},{7,8,5,4},{8,2,3,6},{7,8,5,4},};
    cout<<"Matrix A : \n";
        for(int i=0 ; i<4 ; i++){
            for(int j=0 ; j<4 ; j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }

        for(int k = 0 ; k<4 ; k++){
            if((k%2)!=0){
                for(int i = 0 , j = (4-1) ; i<=j ; i++ , j--){
                    int temp = a[k][i];
                    a[k][i]=a[k][j];
                    a[k][j]=temp;
                }

            }
        }

        cout<<"\nMatrix A in wave form: \n";
        for(int i=0 ; i<4 ; i++){
            for(int j=0 ; j<4 ; j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"\n\nYou can test your own matrix : ";
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
            for(int k = 0 ; k<4 ; k++){
            if((k%2)!=0){
                for(int i = 0 , j = (m-1) ; i<=j ; i++ , j--){
                    int temp = test[k][i];
                    test[k][i]=test[k][j];
                    test[k][j]=temp;
                }

            }
        }
        cout<<"\nTest Matrix wave form: \n";
        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                cout<<test[i][j]<<" ";
            }
            cout<<endl;
        }
    
}