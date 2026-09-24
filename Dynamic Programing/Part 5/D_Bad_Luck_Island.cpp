#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

double dp[105][105][105];


double fp(int r , int s , int p ,double total){
    if(s == 0) return 1;
    if(r == 0) return 0;
    if(p == 0) return 0;

    if(dp[r][s][p] > -0.9) return dp[r][s][p];
    total = (r*s)+(r*p)+(s*p);
    return dp[r][s][p] = ((fp(r , s , p-1 , total)*((s*p)/total)) +
                            (fp(r-1 , s , p, total)*((r*p)/total)) +
                            (fp(r , s-1 , p, total)*((s*r)/total))
                        );

}

double fs(int r , int s , int p , double total){
    if(r == 0) return 1;
    if(p == 0) return 0;
    if(s == 0) return 0;

    if(dp[r][s][p] > -0.9) return dp[r][s][p];
    total = (r*s)+(r*p)+(s*p);
    return dp[r][s][p] = ((fs(r , s , p-1, total)*((s*p)/total)) +
                            (fs(r-1 , s , p, total)*((r*p)/total)) +
                            (fs(r , s-1 , p, total)*((s*r)/total))
                        );

}

double fr(int r , int s , int p , double total){
    if(p == 0) return 1;
    if(r == 0) return 0;
    if(s == 0) return 0;
    

    if(dp[r][s][p] > -0.9) return dp[r][s][p];
    total = (r*s)+(r*p)+(s*p);
    return dp[r][s][p] = ((fr(r , s , p-1, total)*((s*p)/total)) +
                            (fr(r-1 , s , p, total)*((r*p)/total)) +
                            (fr(r , s-1 , p, total)*((s*r)/total))
                        );

}

int main(){
    int r , s , p ;
    cin>>r>>s>>p;
    double total = (r*s)+(r*p)+(s*p);
    memset(dp , -1 , sizeof dp);
    cout<< fixed << setprecision(12)<<fr(r,s,p,total)<<" \n";
    memset(dp , -1 , sizeof dp);
    cout<< fixed << setprecision(12)<<fs(r,s,p,total)<<" \n";
    memset(dp , -1 , sizeof dp);
    cout<< fixed << setprecision(12)<<fp(r,s,p,total)<<"\n";

    return 0;

}


