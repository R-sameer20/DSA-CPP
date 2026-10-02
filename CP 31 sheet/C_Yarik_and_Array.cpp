#include<iostream>
#include<vector>
using namespace std;

// My solution 
// kadane's Algo logic is used somehow 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int  arr[n];
        for(int i = 0 ;  i<n ; i++) cin>>arr[i];
        int mx = arr[0];
        vector<int> preffixSum(n);
        preffixSum[0] =  arr[0];
        for(int i = 1 ; i<n ; i++){
            if((arr[i]%2 == 0 && arr[i-1]%2!=0) ||
                (arr[i]%2 != 0 && arr[i-1]%2==0) ){

                    int toAdd = preffixSum[i-1]+arr[i];
                    if(toAdd >= arr[i]) preffixSum[i] = toAdd;
                    else preffixSum[i] = arr[i];
            }
            else preffixSum[i] = arr[i];
            mx = max(mx , max(preffixSum[i] , arr[i]));
        }
        cout<<mx<<"\n";
    }
    return 0;
}


// // more refineWay
// void solve() {
//     int n;
//     cin >> n;
//     vector<ll> arr(n);
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     ll current_sum = arr[0]; 
//     ll max_sum = arr[0];

//     for (int i = 1; i < n; i++) {

//         if (abs(arr[i] % 2) != abs(arr[i - 1] % 2)) {

//             current_sum = max(arr[i], current_sum + arr[i]);
//         } else {
  
//             current_sum = arr[i];
//         }

   
//         max_sum = max(max_sum, current_sum);
//     }

//     cout << max_sum << "\n";
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }