 #include<iostream>
 #include<vector>
 using namespace std ; 
 int main(){
    int m , n , p , q ;
    cout<<"\nEenter number of rows in first matrix : ";
    cin>>m;
    cout<<"\nEenter number of colum in first matrix : ";
    cin>>n;
    cout<<"\nEenter number of rows in second matrix : ";
    cin>>p;
    cout<<"\nEenter number of colum in second matrix : ";
    cin>>q;

    if (n==p){
        int a[m][n];
        int b[p][q];
        cout<<"\n\n Enter elements of first matrix : \n";
        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                cin>>a[i][j];
            }
        }

        cout<<"\n\n";
        cout<<"Matrix A : \n";
        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n ; j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }

        
        cout<<"\n\n";   

        cout<<"\n\n Enter elements of second matrix : \n";
        for(int i=0 ; i<p ; i++){
            for(int j=0 ; j<q ; j++){
                cin>>b[i][j];
            }
        }

        cout<<"\n\n";
        cout<<"Matrix B: \n";
        for(int i=0 ; i<p ; i++){
            for(int j=0 ; j<q ; j++){
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }

        cout<<"\n\n";  

        //resultant patrix

        int res[m][q];
        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<q ; j++){
               res[i][j]=0;         //every time we initialize element of matrix res by zero
                
                //res[i][j]=a[i][0]*b[0][j] + a[i][1]*b[1][j] +........... 
                //multiplication process
                for(int k = 0 ; k<n ; k++){
                    res[i][j] += a[i][k]*b[k][j];
                }

            }
        }
        cout<<"\n\n";
        cout<<"Resultant matrix : \n";
        for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<q ; j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }



    }

    else{ //n!=p
        cout<<"\n\nThe matrix cant be multiply : ";
    }
 }