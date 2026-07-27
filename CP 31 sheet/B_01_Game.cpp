#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s ;
        cin>>s;
        int zero = 0 , one = 0;
        for(int i = 0 ; i<s.size() ; i++){
            s[i] == '0' ? zero++ : one++;

        }
        int ans = min(one , zero);
        cout << (ans % 2 == 0  ? "NET\n" : "DA\n");
    }
    return 0;
}