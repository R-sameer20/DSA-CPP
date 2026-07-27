#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n , k , x ;
        cin>>n>>k>>x;
        long long mn = ((k) * (k+1))/2;
        long long totalSum = ((n) * (n+1))/2;
        long long temp = n-k;
        long long mx = 0; 
        temp == 0 ? mx = totalSum :  mx =  (totalSum) - ( ((temp) * (temp+1))/2);
        if(x>=mn && x<=mx) cout<<"YES\n";
        else cout<<"NO\n";
    }
}