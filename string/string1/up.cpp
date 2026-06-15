#include<iostream>
#include<string>
#include<algorithm>
using namespace std ;
int main(){
    string str1 = "at poauye otate aoyatar ooo";
    string str2 = " who are you";
    cout<<str1<<endl;
    cout<<"Enter a string :\n";
    getline(cin,str1);
    cout<<endl<<"udated : ";
    for(int i = 0 ; i<str1.size() ; i++){
        if(str1[i]=='o'){
            str1[i]='a';
        }
        cout<<str1[i];
    }
    cout<<endl<<"push back : ";
    str1.push_back('a');
    str1.push_back('h');
    str1.push_back('r');
    str1.push_back('b');
    str1.push_back('&');
    for(int i = 0 ; i<str1.size() ; i++){
        cout<<str1[i];
    }
    cout<<endl<<"pop back : ";
    str1.pop_back();
    str1.pop_back();
    str1.pop_back();
    str1.pop_back();
    cout<<endl<<str1;
    cout<<endl<<"+ operator : ";
    cout<<endl<<str1+str2;
    reverse(str2.begin() , str2.end());
    
    cout<<endl<<"reverse of string : "<<str2;

    reverse(str1.begin()+2 ,str1.end()-1);
    cout<<endl<<"selective reverse : "<<str1;
  
}