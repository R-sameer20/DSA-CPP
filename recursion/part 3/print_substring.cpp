#include<iostream>
#include<string>
using namespace std;
void sub_string(string original , string subS){
    if(original.length()==0){
        cout<<subS<<"\n";
        return;
    }
    else{
        char ch = original[0];
        sub_string(original.substr(1),subS+ch);
        sub_string(original.substr(1),subS);
    }
}

void sub_string_M2(string ans , string original , int idx){
    if(original[idx]==0){
        cout<<ans<<"\n";
        return;
    }
    else{
        char ch = original[idx];
        sub_string_M2(ans+ch , original , idx+1);
        sub_string_M2(ans , original , idx+1);
    }
}

int main(){
    string str;
    cout<<"Enter the string with all unique letter : ";
    getline(cin,str);
    cout<<endl<<"Sumstrings are : \n";
    sub_string(str,"");
    cout<<endl<<"Method 2 :\n ";
    sub_string_M2("",str,0);
}