#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , k;
        cin>>n>>k;
        string s ;
        cin>>s;
        int ans = 0;
        unordered_map<char , int > m;
        for(int i = 0 ; i<n ; i++){
            m[s[i]]++;

        }
        int oddCount = 0;

        for(auto x : m){
            int t = x.second;
            if(t%2==0) continue;
            else oddCount++;
        }
        if(k>=oddCount-1) cout<<"YES\n";
        else cout<<"NO\n";

        // if((n-k)%2 == 0){
        //     for(auto x : m){
        //         int t = x.second;
        //         if(t%2==0) continue;
        //         else ans+=t%2;
        //     }
        //     if(ans == k) cout<<"YES\n";
        //     else if(ans < k){
        //         if((k - ans) %2 ==0 ) cout<<"YES\n";
        //         else cout<<"NO\n";
        //     }
        //     else cout<<"NO\n"; 
        // }
        // else{
        //     for(auto x : m){
        //         int t = x.second;
        //         if(t%2==0) continue;
        //         else ans+=t%2;
        //     }
        //     if(ans == 0) cout<<"YES\n";
        //     else if(ans-1 == k || ans+1 == k ) cout<<"YES\n";
        //     else cout<<"NO\n"; 
        // }
        
    }
    return 0;
}


