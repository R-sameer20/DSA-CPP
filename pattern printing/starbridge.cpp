#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of rows :";
    cin>>n;
    for(int i=1 ; i<=(2*n)-1 ; i++){
        cout<<"*"<<endl;}
        int m=n-1;
        int nsp=1;
        for(int i=1 ; i<=n ; i++){
            for(int j=1 ; j<=(n+1-i ); j++){
                cout<<"*";
            }
            for(int k=1 ; k<=nsp ; k++){
            cout<<" ";
        }
    }
        
        nsp+=2;
        for( int j=1 ; j<=m+1-i ; j++){
            cout<<"*";
        }
        cout<<endl;
        
}
//recheck error occur
