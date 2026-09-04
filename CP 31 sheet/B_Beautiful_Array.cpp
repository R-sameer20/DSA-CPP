#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n, k, b, s;
        cin>>n>>k>>b>>s;
        long long mn = k * b;
        long long mx = k * b + n * (k - 1);
        if (s<mn || s>mx) {
            cout<<-1<<"\n";
            continue;
        }

        vector<long long> ans(n, 0);
        ans[0]=mn; 

        long long size=s-mn;

        for (int i = 0; i<n && size>0; i++) {
            long long add = min(size, k-1);
            ans[i]+=add;
            size-=add;
        }
        
        for (int i=0; i<n; i++) {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}