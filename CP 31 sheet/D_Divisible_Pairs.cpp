#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , x , y;
        cin>>n>>x>>y;
        vector<int> arr(n);
        for(int i = 0 ; i<n ; i++){
            cin>>arr[i];
        }
        int pairCount = 0;
        for(int i = 0 ; i<n-1 ; i++){
            for(int j = i+1 ; j<n ; j++){
                if(((arr[i]+arr[j])%x == 0) && ((arr[i]-arr[j])%y == 0)) pairCount++;
                
            }
        }
        cout<<pairCount<<endl;
    }
    return 0;
}