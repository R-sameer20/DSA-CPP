#include<iostream>
#include<vector>
using namespace std;
long long  helper(int i , int d){
    if(i%d==0) return 1;
    else return 0;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long  n;
        cin>>n;
        if(n<=9) cout<<n<<endl;
        else if(n>=10 && n<100) cout<<9+(n/10)<<endl;
        else if(n>=100 && n<1000) cout<<(9*2)+(n/100)<<endl;
        else if(n>=1000 && n<10000) cout<<(9*3)+(n/1000)<<endl;
        else if(n>=10000 && n<100000) cout<<(9*4)+(n/10000)<<endl;
        else if(n>=100000 && n<1000000) cout<<(9*5)+(n/100000)<<endl;

        
    }
}

// #include <iostream>
// #include <string>

// using namespace std;

// void solve() {
//     long long n;
//     cin >> n;
    
//     // Convert to string to easily count digits and find the first digit
//     string s = to_string(n);
//     int num_digits = s.length();
//     int first_digit = s[0] - '0';
    
//     // Mathematical formula: Base offset for previous digit lengths + first digit value
//     long long ans = 9 * (num_digits - 1) + first_digit;
    
//     cout << ans << "\n";
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