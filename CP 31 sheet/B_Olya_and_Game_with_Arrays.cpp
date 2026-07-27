#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<vector<long long>>arr;
        long long i = n;
        while(i--){
            long long m;
            cin>>m;
            vector<long long> temp(m);
            for(int i = 0 ; i<m ; i++){
                cin>>temp[i];
            }
            arr.push_back(temp);
        }
        for(int i = 0 ; i< n ; i++){
            sort(arr[i].begin() , arr[i].end());
        }
        long long ans = 0;
        long long secondMin = arr[0][1];
        long long mn = arr[0][0];
        for(int i = 0 ; i<n ; i++){
            ans += arr[i][1];
            secondMin = min(secondMin , arr[i][1]);
            mn = min(mn , arr[i][0]);
        }

        cout<<ans + mn - secondMin <<"\n";

    }
}

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long n;
//         cin>>n;
//         vector<vector<long long>>arr;
//         long long i = n;
//         while(i--){
//             long long m;
//             cin>>m;
//             vector<long long> temp(m);
//             for(int i = 0 ; i<m ; i++){
//                 cin>>temp[i];
//             }
//             arr.push_back(temp);
//         }
//         for(int i = 0 ; i< n ; i++){
//             sort(arr[i].begin() , arr[i].end());
//         }
//         long long ans = 0;
//         long long mn = arr[0][0];
//         for(int i = 1 ; i<n ; i++){
//             ans += arr[i][1];
//             mn = min(mn , arr[i][0]);
//         }

//         cout<<ans + mn  <<"\n";

//     }
// }


// gemini sc O(1)
// #include <iostream>
// #include <algorithm>
// #include <climits>
// using namespace std;

// void solve() {
//     int n;
//     cin >> n;

//     long long global_min1 = LLONG_MAX;
//     long long sum_min2 = 0;
//     long long min_of_min2 = LLONG_MAX;

//     for (int i = 0; i < n; i++) {
//         int m;
//         cin >> m;

//         long long first_min = LLONG_MAX;
//         long long second_min = LLONG_MAX;

//         for (int j = 0; j < m; j++) {
//             long long x;
//             cin >> x;

//             // Find 1st and 2nd minimums in O(1) space per element
//             if (x < first_min) {
//                 second_min = first_min;
//                 first_min = x;
//             } else if (x < second_min) {
//                 second_min = x;
//             }
//         }

//         // Update global metrics
//         global_min1 = min(global_min1, first_min);
//         sum_min2 += second_min;
//         min_of_min2 = min(min_of_min2, second_min);
//     }

//     // Final answer calculation
//     cout << sum_min2 - min_of_min2 + global_min1 << "\n";
// }

// int main() {
//     // Fast I/O
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }