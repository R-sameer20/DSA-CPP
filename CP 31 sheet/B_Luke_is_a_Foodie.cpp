#include<iostream>
#include<vector>
using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long n , x;
//         cin>>n>>x;
//         vector<long long> arr(n,0);
//         for(long long i = 0 ; i<n ; i++)  cin>>arr[i];
//         long long i = 0 , j = 0 , count = 0;;
//         while( j!=n  && i!=n  ){
//             if(abs(arr[i] - arr[j]) > 2*x ){
//                 count++;
//                 i = j;
//             }
//             j++;
//         }    
        
//         cout<<count<<"\n";
//     }
//     return 0;
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long n , x;
//         cin>>n>>x;
//         // vector<long long> arr(n,0);
//         long long pre=0 , count=0 ;
//         for(long long i = 1 ; i<=n ; i++){
//             long long val ;
//             cin>>val;
//             if(i==1) pre = val;
//             if(abs(pre - val) > 2*x){
//                 count++;
//                 pre = val;
//             }
            
//         }
//         cout<<count<<"\n";
//     }
//     return 0;

// }



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long n, x;
        cin >> n >> x;

        long long currMn = 0, currMx = 0;
        long long count = 0;

        for (long long i = 1; i <= n; i++) {
            long long val;
            cin >> val;

            if (i == 1) {
                currMn = val;
                currMx = val;
            } else {
                currMn = min(currMn, val);
                currMx = max(currMx, val);

                if (currMx - currMn > 2 * x) {
                    count++;
                    currMn = val;
                    currMx = val;
                }
            }
        }

        cout << count << "\n";
    }
    return 0;
}