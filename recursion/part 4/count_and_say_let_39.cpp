#include<iostream>
#include<string>
using namespace std;
string count_and_say(int n){
    if(n==1) return "1";
    string str = count_and_say(n-1);
    string ztr = "";
    int freq = 1;
    char ch = str[0];
    for(int i = 0 ; i<str.length() ; i++){
        char dh = str[i];
        if(ch==dh){
            freq++;
        }
        else{   //ch!=dh
            ztr += to_string(freq)+ch;
            freq=1;
            ch=dh;
        }
    }
    ztr += to_string(freq)+ch;
    return ztr;
}
int main(){
    int n=4;
    cout<<count_and_say(n);
}