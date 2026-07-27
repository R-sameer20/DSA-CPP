#include<iostream>
#include<string>
#include<set>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    while(n--){
        string s ;
        string t;
        cin>>s;
        cin>>t;
        set<char> existBefore;
        int j = (int)t.size()-1;
        bool flag = true;
        for(int i = (int)s.size()-1 ; i>=0 ; i--){
            if(s[i] == t[j]){
                if(existBefore.find(s[i]) !=existBefore.end()){
                    flag = false ;
                    break;
                }
                else  j--; 
                if(j==-1) break;     
            }
            else existBefore.insert(s[i]);  
        }
        if(flag && j==-1) cout<<"YES\n";
        else cout<<"NO\n";   
    }
    return 0;
}