//can break string in its substring : 

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){
    double number = 56487512387546;
    string s = "where are you going , i am waiting for you";
    int n = s.length();
    cout<<"length of string : "<<n<<endl;
    int i;
    cout<<"enter the number :";
    cin>>i;                         //i is number onward string will print
    cout<<s.substr(i,42);
    cout<<endl<<"number is converted in string :";
    string convert = to_string(number);
    cout<<convert;
    
}