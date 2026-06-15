#include<iostream>
#include<string>
#include<algorithm>
using namespace std ;
int main(){
    string str1 = "you are great  ";
    cout<<str1;
    cout<<endl;
    int count = 0 ;
    for(int i = 0 ; i<str1.length() ; i++){
        if(str1[i]=='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u' ){
            count++;
        }
    }
    cout<<"Number of vowles is : "<<count;
}    
