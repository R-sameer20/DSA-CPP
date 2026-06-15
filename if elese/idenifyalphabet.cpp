#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a charachter :";
    cin>>ch;
    int ascii = (int) ch ;
    if(ascii>=65 && ascii<=90){
        cout<<"upper case alphabet"<<"  ";
        cout<<ch;
    }
    if(ascii>=97 && ascii<=122){
        cout<<"lower case alphabet"<<"  ";
        cout<<ch;

    }
    if(ascii>=48 && ascii<=57){
        cout<<"numeric value"<<"  ";
        cout<<ch;
    }

    else{
        cout<<"conditions dosent match";
    }

}