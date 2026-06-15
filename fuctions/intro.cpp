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
    calcul(5); //calling of fuvtion calcul for 5 time
    calcul(4);
    calcul(3);
    calcul(2);
    calcul(1);
    }