#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        char ch ;
        cin>>n;
        cin>>ch;

        string s;
        cin>>s;

        s+=s ;
        long long lastg = 0 , ans = INT_MIN;
        for(long long  i =(2*n)-1 ; i>=0 ; i--){
            if(s[i] == 'g'){
                lastg = i;
            }
            if(s[i] == ch && lastg!=0 ){
                ans = max(ans , lastg-i);
            }
        }
        cout<<ans<<"\n";

    }
    return 0;
}