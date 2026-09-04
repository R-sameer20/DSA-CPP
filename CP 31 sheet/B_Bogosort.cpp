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
        vector<int> arr(n,0);
        for(int i = 0 ; i<n ; i++) cin>>arr[i];
        sort(arr.rbegin() , arr.rend());
        for(int i = 0 ; i<n ; i++) cout<<arr[i]<<" ";

        cout<<"\n";

    }
    return 0;
}