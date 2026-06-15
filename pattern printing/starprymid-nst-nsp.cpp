#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows:";cout<<" ";
    cin>>n;
    int nst=1;
    int nsp=n-1;
    for(int i=1 ; i<=n ;i++){
        for(int j=1 ; j<=nsp; j++){
            cout<<" ";
    }
    nsp--; 
            for(int k=1 ; k<=nst ; k++){
                cout<<"*";
        }
        nst+=2;
     
        cout<<endl;
    }
}

// nsp=number of spaces control by j 
// nst=number of satrs control by k 
// i every loop spaces decreas by 1 and stars increas by 2 
// and spaces in reach row is n-i but it inatialised by n-1 so further it can deduced by 1
// because i reduced by 1