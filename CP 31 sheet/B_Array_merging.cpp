#include<iostream>
#include<vector>
using namespace std;

void inputArray(vector<long long>& arr , long long n){
    for(int i = 1 ; i<=n ; i++){
        cin>>arr[i];
    }

}


void fillArray(vector<long long>& arr, vector<long long>& maxaFreArr, long long n) {
    long long pre = arr[1];
    long long current = 1;

    for (int i = 2; i <= n; i++) {
        if (arr[i] == pre) {
            current++;
        } else {
            maxaFreArr[pre] = max(maxaFreArr[pre], current);
            pre = arr[i];
            current = 1;
        }
    }
    maxaFreArr[pre] = max(maxaFreArr[pre], current);
}


// long long longestSubArray(vector<long long> &arr ){
//     long long pre = arr[0];
//     long long mx = INT_MIN , current = 0;;
//     long long i = 0 ;
//         while(i<arr.size()){
//             if(arr[i] == pre) current++;
//             else{
//                 mx = max(mx , current);
//                 pre = arr[i];
//                 current = 1;
//             }
//             i++;
//         }
//     return mx = max(mx , current);

// }
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>arr(n+1 , 0);
        vector<long long>brr(n+1 , 0);
        vector<long long>maxFreArr((2*n+1), 0);
        vector<long long>maxFreBrr((2*n+1), 0);

        inputArray(arr , n);
        inputArray(brr , n);

        
        fillArray(arr, maxFreArr, n);
        fillArray(brr, maxFreBrr, n);

        long long ans=INT_MIN;
        for (int i=1; i<=(2*n); i++){
            ans = max(ans, maxFreArr[i] + maxFreBrr[i]);
        }
        cout<<ans<<"\n";   
    }
    return 0;
}