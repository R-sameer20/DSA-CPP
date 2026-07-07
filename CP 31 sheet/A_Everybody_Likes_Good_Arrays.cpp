#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0 ; i<n ; i++){
            cin>>arr[i];
        }
        
        int i =0;
        int j = 0;
        int op = 0;
        if(n==1){
             cout<<op<<endl;
             continue;
        }
        while(i<=n-2){
            if(arr[i]%2==0){
                if(arr[i+1]%2==0){
                    j = i+1;
                    while(j<n && arr[j]%2==0){
                        j++;
                        op++;
                    }
                    i = j;
                }
                else i++;  
            }
            else{
                if(arr[i+1]%2!=0){
                    j = i+1;
                    while(j<n && arr[j]%2!=0){
                        j++;
                        op++;
                    }
                    i = j;
                }
                else i++;
            }  
        }
        cout<<op<<endl;
    }
    return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     // Fast I/O
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<int> arr(n);
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }

//         int op = 0;
//         // Simply check every adjacent pair. 
//         // If they have the same parity, increment the operation counter.
//         for (int i = 0; i < n - 1; i++) {
//             if ((arr[i] % 2) == (arr[i + 1] % 2)) {
//                 op++;
//             }
//         }
//         cout << op << "\n";
//     }
//     return 0;
// }