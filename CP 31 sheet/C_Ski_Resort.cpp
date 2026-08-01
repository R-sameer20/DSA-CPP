#include<iostream>
#include<vector>
using namespace std;
long long combination(long long n , long long k){
    // int ans = (n*(n+1))/2;
    // ans-=((n*k) - ((k*(k+1))/2) );
    // return ans;

    return ((n-k+1)*(n-k+2))/2;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n , k , q;
        cin>>n>>k>>q;
        vector<long long> arr(n);
        for(int i = 0 ; i<n; i ++){
            cin>>arr[i];
        }

        // need count of windows of min size k where 
        // arra element less or equal to max temp q
        int i = 0 , j = 0;
        long long count = 0;
        while(j<n && i<n){
            if(arr[j]  > q ){
                if(j - i >= k ) count += combination(j - i , k);
                j++;
                i = j;
            }
            else j++;
        }

        if(j - i >= k && arr[j-1] <= q){
            count += combination(j - i , k); 
            
        }
        cout<<count<<"\n";
    }
}