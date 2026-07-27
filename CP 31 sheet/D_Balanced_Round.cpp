#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , k ;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i = 0 ; i<n ; i++ ){
            cin>>arr[i];
        }
        sort(arr.begin() , arr.end());
        int longest = 1;      
        int currentLongest = 1; 
        for (int i = 1; i < n; i++) {
            if (arr[i] - arr[i-1] <= k) {
                currentLongest++;
            } else {
                longest = max(longest, currentLongest);
                currentLongest = 1;
            }
        }

        longest = max(longest, currentLongest);
        cout << n - longest << "\n";
    }
    return 0;
}