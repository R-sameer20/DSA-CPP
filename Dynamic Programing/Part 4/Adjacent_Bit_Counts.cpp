#include<iostream>
#include<cstring>

using namespace std;

int dp[105][105][2];


int ftd(int n , int k , int last){
    if(n==0) return 0;
    if(n == 1){
        if(k == 0) return 1;
        else return 0;
    }
    if(dp[n][k][last] != -1) return dp[n][k][last];

    if(last == 1){
        return dp[n][k][last] = ftd(n-1 , k , 0) + ftd(n-1 , k-1 , 1);
    }
    else return dp[n][k][last] = ftd(n-1 , k , 0) + ftd(n-1 , k , 1);

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int testNo , n , k;
        cin>>testNo>>n>>k;
        memset(dp , -1 , sizeof dp);
        int ans = ftd(n , k , 0) + ftd(n , k , 1);

        cout<<testNo<<" "<<ans<<"\n";
    }
    return 0;
}