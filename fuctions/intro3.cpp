#include<iostream>
using namespace std;
   void itrangle(int x){
            for(int i=1 ; i<=x ; i++){
            for(int j=1 ; j<=x-i ; j++){
                cout<<"*";
            }
           cout<<endl;
        }

    }
    void retrangle(int x){
            for(int i=1 ; i<=x ; i++){ 
            for(int j=1 ; j<=x-i ; j++){
                cout<<" ";
        }
        for(int k =1 ; k<=i ; k++){
            cout<<"*";
        }
            cout<<endl;
        }

    }
    int main(){
        int n;
        cout<<"enter number of row :";
        cin>>n;
        retrangle(n);
        itrangle(n);
    }