#include <iostream>
#include <vector>
#include<unordered_map>
using namespace std;

void solve() {
    long long  n;
    cin >> n;
    
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    unordered_map<long long , int > m;
    for(int i = 0 ; i<n ; i++){
        m[a[i]]++;
        if(m.size() > 2){
            cout<<"No\n";
            return ;
        }
    }
    if(m.size() == 1){
        cout<<"Yes\n";
        return ;
    }
    
    int fre1 = m.begin()->second;
    m.erase(m.begin());
    int fre2 = m.begin()->second;
    m.erase(m.begin());

    if(abs(fre1 - fre2) > 1){
            cout<<"No\n";
            return ;
    }
    else{
        cout<<"Yes\n";
        return ;
    }
    

}

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}