#include<iostream>
#include<string>
#include<algorithm>
using namespace std ;
int main(){
    string str1 = "Sameer is great ";
    cout<<str1;
    
    cout<<endl;
    string str2 ;
    cout<<"Enter the string : ";
    cin>>str2;
    cout<<"You entered :\n";
    cout<<str2;

    cout<<endl;
    string str3 ;
    cout<<"Using getline : \n";
    getline(cin,str3);
    str3 ="jhufdyihd JYD uy e";
    cout<<str3;
}

