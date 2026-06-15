#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string test1 = "aakhykdntalk";
    string test2 = "aakhykdntalk";
    int n = test1.size();
    int m = test1.size();
    cout<<endl<<"size of first string : "<<n;
    cout<<endl<<"size of second string : "<<m;
    
    sort(test1.begin(),test1.end());
    sort(test2.begin(),test2.end());
    cout<<endl;
    if(test1==test2){
        cout<<"anagram :";
    }
    else{
        cout<<" not anagram :";
    }
    cout<<endl;
    cout<<endl<<"now teat any string : "<<endl;
    cout<<"Enter first string : ";
    getline(cin,test1);
    cout<<endl<<"Enter second string : ";
    getline(cin,test2);
    sort(test1.begin(),test1.end());
    sort(test2.begin(),test2.end());
    cout<<endl;
    if(test1==test2){
        cout<<"anagram :";
    }
    else{
        cout<<" not anagram :";
    }
    cout<<endl; 
}