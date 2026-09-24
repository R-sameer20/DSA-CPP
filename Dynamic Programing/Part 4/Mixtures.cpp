#include<iostream>
#include<vector>
#include<climits>
#define ll long long int 
using namespace std;

// ll dp[105][105];
vector<vector<int>> dp;
vector<int> colour;

ll g(int i , int j){
    ll result = 0;
    for(int m = i ; m<= j ; m++){
        result = (result %100  + colour[m] %100 )%100;
    }

    return result;

}

ll ftd(int i , int j){
    if(i == j) return 0;
    if(dp[i][j] != -1)return dp[i][j];
    
    ll result = INT_MAX;

    for(int k = i ; k<=j-1 ; k++){
        result = min(result , ftd( i , k) + ftd( k+1 , j) + g(i , k) * g( k+1 ,j ) );
    }

    return dp[i][j]=result;

}

ll fbu(){
    int n = colour.size();
    dp.clear();
    dp.resize(105 , vector<int>(105 , 0));

    for(int len = 2 ; len<=n ; len++){
        for(int i = 0 ; i<= n- len ; i++){
            int j = i + len - 1;
            ll result = INT_MAX;

            for(int k = i ; k<=j-1 ; k++){
                result = min(result , dp[i][k] + dp[k+1][j] + g(i , k) * g( k+1 ,j ) );
            }

            dp[i][j]=result;
        }
    }

    return dp[0][n-1];
}

int main(){
    int n;
    while(cin>>n){
        colour.clear();
        colour.resize(n , 0);
        for(int i = 0 ; i<n ; i++) cin>>colour[i];
        // memset(dp , sizeof dp , -1);

        // top down approch
        // dp.clear();
        // dp.resize(105 , vector<int>(105 , -1));
        // ll ans = ftd(0 , n-1);
        // cout<<ans<<"\n";

        // boyyom up approch 
        ll ans = fbu();
        cout<<ans<<"\n";
        
    }


    return 0;

}