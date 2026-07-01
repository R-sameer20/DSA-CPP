#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;

void mostCommon(){
    int n ;
    int k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    unordered_map<int , int> mp;
    for(int i = 0; i<n  ;i++){
        mp[arr[i]]++;
         
    }
    if(mp.find(k)!=mp.end())  cout<<"YES\n";
    else cout<<"NO\n";
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        mostCommon();
        
    }
    return 0;
}