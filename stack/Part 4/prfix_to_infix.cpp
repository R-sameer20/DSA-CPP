#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
string solve (string val1 , string val2 , char ch){
    string s = "";
    s += val1;
    s.push_back(ch);
    s += val2;
     
    return s;
}
int main(){
    string s = "-/*+79483";
    stack<string> val;

    for(int i = s.length()-1 ; i>=0 ; i--){
        if(s[i]>=48 && s[i]<=57){
            val.push((to_string)(s[i]-48));
        }
        else{
            char ch = s[i];
            string val1 = val.top();
            val.pop();
            string val2 = val.top();
            val.pop();
            string ans = solve(val1,val2,ch);
            val.push(ans);
        }
    }
    
    cout<<val.top();
}