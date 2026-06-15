#include<iostream>
#include<string>
using namespace std;
void removech(string ans , string original){
    if(original.length()==0){
        cout<<"\n\nmodifies string :"<<ans;
        return ;
    }
    char ch = original[0];
    if(ch=='a') removech(ans , original.substr(1));
    else removech(ans + ch , original.substr(1));
}

void removech_M2(string ans , string original , int idx){
    if(idx==original.length()){
        cout<<"\n\nmodifies string :"<<ans;
        return ;
    }
    char ch = original[idx];
    if(ch=='a') removech_M2(ans,original,idx+1);
    else removech_M2(ans+ch,original,idx+1);
}

int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    removech("",str);
    cout<<"\n\nMethod 2 :";
    removech_M2("",str,0);
}