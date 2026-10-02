#include<iostream>
#include <cstring>
#include<iomanip>
using namespace std;

int dp[1005][1005];
int f(string &s , string &t , int i , int j){
    if (i == s.size()) return 1e9;
    if (j == t.size()) return 1;
    
    int skip = f(s, t, i + 1, j);

    
    int k = j;
    while (k < t.size() && t[k] != s[i]) {
        k++;
    }

    if (k == t.size()) {
        return dp[i][j] = 1;
    }
    int take = 1 + f(s, t, i + 1, k + 1);

    return dp[i][j] = min(skip, take);
}
int main(){
    string s , t;
    cin>>s>>t;
    memset(dp , -1 , sizeof(dp));
    int result = f(s,t,0,0);
    if (result >= 1e9) {
        cout << -1 << "\n";
    } else {
        cout << result << "\n";
    }
    return 0;
}