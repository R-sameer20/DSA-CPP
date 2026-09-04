#include<iostream>
#include<string>
#include<vector>
using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string samll , big;
//         cin>>samll>>big;
//         long long smallSize = samll.size() , bigsize = big.size();

//         if(smallSize > bigsize){
//             long long tempSize = bigsize;
//             bigsize = smallSize;
//             smallSize = tempSize;

//             string tempString = samll ;
//             samll = big;
//             big = tempString;
//         }

//         long long mxCountSame = 0;

//         long long jump = 1;
//         for(long long i = 0; i < smallSize; i+=jump){
//             for(long long j = 0; j < bigsize; j++){
//                 long long k = i, m = j;
//                 long long currentMax = 0;

//                 while(k < smallSize && m < bigsize && samll[k] == big[m]){
//                     currentMax++;
//                     k++;
//                     m++;
//                 }
//                 jump = m;
//                 mxCountSame = max(mxCountSame, currentMax);
//             }
//         }

//         cout<<smallSize+bigsize-(2*mxCountSame)<<"\n";
//     }
//     return 0;
// }


int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;

        int n = a.size();
        int m = b.size();

        // dp[i][j] stores the length of longest common suffix of a[0..i-1] and b[0..j-1]
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        int mxCountSame = 0;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (a[i - 1] == b[j - 1]) {
                    dp[i][j] = 1 + dp[i - 1][j - 1]; // Reuse previous sub-problem result
                    mxCountSame = max(mxCountSame, dp[i][j]);
                } else {
                    dp[i][j] = 0; // Mismatch resets contiguous count
                }
            }
        }

        cout << (n + m - 2 * mxCountSame) << "\n";
    }
    return 0;
}

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string samll , big;
//         cin>>samll>>big;
//         long long smallSize = samll.size() , bigsize = big.size();
//         if(smallSize > bigsize){
//             long long tempSize = bigsize;
//             bigsize = smallSize;
//             smallSize = tempSize;

//             string tempString = samll ;
//             samll = big;
//             big = tempString;

//         }
//         long long i = 0;
//         long long mxCountSame = INT_MIN , currentMax = 0;
//         while(i < smallSize ){
//             long long k = i , j = 0;
//             while(k<smallSize && j<bigsize){
//                 if(samll[k]!=big[j]){
//                     mxCountSame = max (mxCountSame , currentMax);
//                     currentMax = 0;
//                 }
//                 else{
//                     currentMax++;
//                     k++;
//                 }
//                 j++;
                

//             }
//             i++;
//         }
//         mxCountSame = max (mxCountSame , currentMax);
//         cout<<smallSize+bigsize-(2*mxCountSame)<<"\n";
//     }
// }

