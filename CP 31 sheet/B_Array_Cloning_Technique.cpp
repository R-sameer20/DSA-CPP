#include<iostream>
#include<map>
#include <climits>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        map<int , int> freq;
        for(int i = 0 ; i<n ; i++){
            int val;
            cin>>val;
            freq[val]++;
        }
        int f = INT_MIN;
        for(auto x : freq){
            int fe = x.second;
            f = max(fe , f);
        }
        int rem = n - f;
        if(rem == 0){
            cout<<0<<endl;
            continue;
        }
        int totalOpp = 0;

        while(rem > f ){
            totalOpp += min(f , rem) +1;
            rem-=f;
            f*=2;
        }
        totalOpp += rem+1;
        cout<<totalOpp<<endl;
    }
}