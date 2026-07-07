#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
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
        bool flag = false;
        for(int i = 1 ; i<n ; i++){
            if(arr[i]!=arr[i-1]){
                flag = true ;
                break; 
            }
        }
        if(!flag){
            cout<<"NO\n";
            continue;
        }
        int mx = INT_MIN ;
        int mxIdx = 0;
        for(int i = 0 ; i<n ; i++){
            if(mx<arr[i]){
                mx=arr[i];
                mxIdx = i;
            }
        }
        swap(arr[mxIdx] , arr[0]);
        
        cout<<"YES\n";
        for(int i = 0 ; i< n ; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}