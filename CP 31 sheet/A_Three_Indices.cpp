#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long > arr(n+1);

        
        for(int i = 1 ; i<=n ; i++){
            cin>>arr[i];
        }
        int i = 0;
        bool flag = false;
        for( i = 2 ; i<=n-1 ; i++){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                flag = true;
                break;
            }
        }
        if(flag){
            cout<<"YES\n";
            cout<<i-1<<" "<<i<<" "<<i+1<<"\n";
        }
        else cout<<"NO\n";
    }
    return 0;
}