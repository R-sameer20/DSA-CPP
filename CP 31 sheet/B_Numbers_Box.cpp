#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , m;
        cin>>n>>m;
        // vector<vector<int>> arr(n, vector<int>(m, 0));
        int negCount = 0 , absMin = INT_MAX ;
        int sum = 0;
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<m ; j++){
                int val;
                cin>>val;
                sum+=abs(val);
                if(val<0) negCount++;
                if(absMin > abs(val)) absMin = abs(val);    
            }
        }
        if(negCount%2==0) cout<<sum<<"\n";
        else cout<<sum - (2*absMin)<<"\n";     
    }
    return 0;
}