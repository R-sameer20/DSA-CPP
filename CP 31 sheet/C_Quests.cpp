
// my greddy approch
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , k;
        cin>>n>>k;
        vector<int> first(n,0);
        vector<int> second(n,0);
        int pre = first[0];
        for(int i = 0 ; i<n ; i++){
            cin>>first[i];
            first[i]+=pre;
            pre = first[i];
        }
        int mx = 0;
        for(int i = 0 ; i<n ; i++){
            cin>>second[i];
            mx = max(mx , second[i]);
            second[i] = mx;
        }
        
        int ans = 0;
        for(int i = 0 ; i<k && i<n ; i++){
            if(i == k-1 ){
                ans = max(ans , first[i]);
            }
            else{
                int temp = first[i] + (second[i] * (k-1-i));
                ans = max(temp , ans);
            }
            
        }
        cout<<ans<<"\n";

    }
}


// gemini logic

// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// void solve() {
//     int n, k;
//     cin >> n >> k;

//     vector<long long> a(n), b(n);
//     for (int i = 0; i < n; i++) cin >> a[i];
//     for (int i = 0; i < n; i++) cin >> b[i];

//     long long max_score = 0;
//     long long sum_a = 0;
//     long long max_b = 0;

//     int limit = min(n, k);
//     for (int i = 0; i < limit; i++) {
//         sum_a += a[i];
//         max_b = max(max_b, b[i]);

//         long long current_score = sum_a + max_b * (k - 1 - i);
//         max_score = max(max_score, current_score);
//     }

//     cout << max_score << "\n";
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