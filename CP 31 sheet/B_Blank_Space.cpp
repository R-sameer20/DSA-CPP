#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0 ; i<n ; i++){
            cin>>arr[i];
        }
        int i = 0;
        int k = 0;
        int mxLen = 0;
        while(i<n){
            if(arr[i] == 0){
                k = i;
                while( i<n && arr[i]==0){
                    i++;
                }
                if(k==i) mxLen =1;
                else mxLen = max(mxLen , (i-k));
            }
            else i++;
        }
        cout<<mxLen<<endl;

    }
    return 0;
}


// gemini
// #include <iostream>
// #include <algorithm>
// using namespace std;

// void solve() {
//     int n;
//     cin >> n;
    
//     int mxLen = 0;
//     int current_zeros = 0;
    
//     for (int i = 0; i < n; i++) {
//         int val;
//         cin >> val; // Read element on the fly
        
//         if (val == 0) {
//             current_zeros++;
//             mxLen = max(mxLen, current_zeros);
//         } else {
//             current_zeros = 0; // Reset counter when a 1 is encountered
//         }
//     }
    
//     cout << mxLen << "\n";
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