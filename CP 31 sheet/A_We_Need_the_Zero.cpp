#include<iostream>
#include<vector>;
using namespace std;
int selfXOR(vector<int> &arr , int t){
    int ans = t;
    for(int i = 1 ; i <arr.size() ; i++){
           ans =( ans^arr[i]);
        }
        return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0 ; i<n ; i++){
            cin>>arr[i];
        }
        int ans = selfXOR(arr,arr[0]);
        for(int i = 0 ; i<n ; i++){
            arr[i] = (arr[i]^ans);
        }
        int checkZero = selfXOR(arr,arr[0]);
        if(checkZero) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}