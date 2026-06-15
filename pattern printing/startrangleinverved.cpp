#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows:";cout<<" ";
    cin>>n;
    for(int i=1 ; i<=n ; i++)
       { for(int j=1 ; j<=n+1-i ; j++){
            cout<<"*";
           
    }
        cout<<endl;
    }
        
    
}

//n=number of rows , i= no. of row j=no. of stars in a row 
// i+j=n+1
//therefore j=n+1-i