#include<iostream>
using namespace std;
    void calcul(int x){
        for(int i=1 ; i<=x ; i++){
            for(int j=1 ; j<=i ; j++){
                cout<<"*";
            }
            cout<<endl;
        }

    }
    int main(){
    int n;
    cout<<"enter number of row :";
    cin>>n;
    calcul(n); //calling of fuvtion calcul for 5 time
    calcul(n-1);
    calcul(n-2);
    calcul(n-3);
    calcul(n-5);
    }