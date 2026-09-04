#include<iostream>
#include<vector>
#include<algorithm>
using  namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<pair<long long , long long>>visitCount(n);
        for(long long i = 0 ; i<n ; i++){
            cin>>visitCount[i].first;
            visitCount[i].second = i+1;
        }
        sort(visitCount.rbegin() , visitCount.rend());
        long long walkCount  = 0 ;
        vector<long long>ans(n+1);
        ans[0] = 0;

        long long dist = 1;
        for (long long i = 0; i < n; i++) {
            long long idx = visitCount[i].second;

            walkCount += 2 * dist * visitCount[i].first;

            if (i % 2 == 0) {
                ans[idx] = dist;
            } 
            else {
                ans[idx] = -dist;
                dist++; 
            }
        }
        cout<<walkCount<<"\n";
        for(auto x : ans){
            cout<<x<<" ";
        }
        cout<<"\n";
        
    }
    return 0;
}


// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--) {
//         long long n;
//         cin >> n;

//         // Store pair: {visitCount, original_index}
//         vector<pair<long long, long long>> buildings(n);
//         for (long long i = 0; i < n; i++) {
//             cin >> buildings[i].first;
//             buildings[i].second = i + 1; // 1-based building index
//         }

//         // Sort descending by visit count
//         sort(buildings.rbegin(), buildings.rend());

//         long long walkCount = 0;
//         vector<long long> ans(n + 1);
        
//         // Place Headquarters at coordinate 0
//         ans[0] = 0;

//         long long distance = 1;
//         for (long long i = 0; i < n; i++) {
//             long long original_idx = buildings[i].second;
//             long long visits = buildings[i].first;

//             walkCount += 2 * distance * visits;

//             if (i % 2 == 0) {
//                 ans[original_idx] = distance;
//             } else {
//                 ans[original_idx] = -distance;
//                 distance++; // Increase distance after using both +distance and -distance
//             }
//         }

//         cout << walkCount << "\n";
//         for (long long i = 0; i <= n; i++) {
//             cout << ans[i] << (i == n ? "" : " ");
//         }
//         cout << "\n";
//     }
//     return 0;
// }