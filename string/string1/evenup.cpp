#include<iostream>
#include<string>
#include<algorithm>
using namespace std ;
int main(){
    string str1 ;
    getline(cin,str1);
    cout<<str1<<endl;
    for(int i = 0 ; str1[i]!='0'; i++){
        if(i%2==0){
            str1[i]='a';
        }
    }
    for(int i = 0 ; str1[i]!='0';i++){
        cout<<str1[i];
    }
}