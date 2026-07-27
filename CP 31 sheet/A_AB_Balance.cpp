#include<iostream>
#include<string>
using namespace std;
int main(){
    int t ; 
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s[0] != s[s.size() - 1]) s[s.size() - 1] = s[0];
        cout<<s<<endl;
    }
    return 0;
}