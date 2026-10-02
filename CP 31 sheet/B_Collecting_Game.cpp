#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long int

using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<ll,ll>> arr(n);

        for(int i = 0 ; i <n ; i++){
            cin>>arr[i].first;
            arr[i].second = i;
        }

        sort(arr.begin() , arr.end());
        vector<ll> preffixArr(n+1);
        preffixArr[0] = arr[0].first;

        for(int i = 1 ;  i<n ; i++){
            preffixArr[i] = preffixArr[i-1] + arr[i].first;
        };

        vector<ll> ans(n+1);

        for(int i = 0 ; i<n ; i++){
            int j = i;
            int tillFound = i;
            while(j<n){
                pair<ll,ll> temp = {preffixArr[j]+1 , INT_MIN};
                ll idx = lower_bound(arr.begin() , arr.end() , temp) - arr.begin();
                idx--;
                if(idx == j) break;
                tillFound += idx- j;
                j = idx;
            }
            ans[arr[i].second] = tillFound;
            
        }

        for(int i = 0 ; i<n ; i++){
            cout<<ans[i]<<" ";

        }
        cout<<endl;
        
        


    }
    return 0;
}