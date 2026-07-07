#include<iostream>
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
        int posOne = 0;
        int negOne = 0;
        for(int i = 0 ; i<n ; i++){
            if(arr[i] == 1) posOne++;
            else negOne++;
        }

        if(n%2==0){
            if(posOne < negOne){
            int reqP = (n/2) - posOne;
            negOne-=reqP;
                if(negOne%2==0){
                    cout<<reqP<<endl;
                }
                else{
                    cout<<reqP+1<<endl;
                }
            }
            else {
                if(negOne%2==0) cout<<0<<endl;
                else cout<<1<<endl;
            }
        }
        else{
            if(posOne < negOne){
            int reqP = (n/2 + 1) - posOne;
            negOne-=reqP;
                if(negOne%2==0){
                    cout<<reqP<<endl;
                }
                else{
                    cout<<reqP+1<<endl;
                }
            }
            else {
                if(negOne%2==0) cout<<0<<endl;
                else cout<<1<<endl;
            }
        }
        
        
    }
    return 0;
}

// gemini

// #include <iostream>
// using namespace std;

// void solve() {
//     int n;
//     cin >> n;
    
//     int posOne = 0;
//     int negOne = 0;
    
//     // Read elements and count on the fly (No array needed!)
//     for (int i = 0; i < n; i++) {
//         int val;
//         cin >> val;
//         if (val == 1) posOne++;
//         else negOne++;
//     }
    
//     int operations = 0;
    
//     // Constraint 1: sum >= 0 (means posOne must be >= negOne)
//     // We flip -1 to 1 until posOne >= negOne
//     while (posOne < negOne) {
//         negOne--;
//         posOne++;
//         operations++;
//     }
    
//     // Constraint 2: product == 1 (means negOne must be even)
//     // If it's odd, we must flip one more -1 to 1
//     if (negOne % 2 != 0) {
//         operations++;
//     }
    
//     cout << operations << endl;
// }

// int main() {
//     // Optimize standard I/O operations for speed
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }