#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long xo , n;
        cin>>xo>>n;
        if(xo%2!=0){
            if(n%4 == 0) cout<<xo<<endl;
            long long distantJump = (4*(n/4 ))+ 1;
            if(n%4==1) cout<<xo+distantJump<<endl;
            else if(n%4==2) cout<<xo-1<<endl;
            else if(n%4==3) cout<<xo-3-distantJump<<endl;
        }
        else{
            if(n%4 == 0) cout<<xo<<endl;
            long long distantJump = (4*(n/4 )+ 1);
            if(n%4==1) cout<<xo - distantJump<<endl;
            else if(n%4==2) cout<<xo+1<<endl;
            else if(n%4==3) cout<<xo+3+distantJump<<endl;
        }
        

    }
}


// gemini 
// #include<iostream>
// using namespace std;

// int main(){
//     // Fast I/O for CP
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int t;
//     if (cin >> t) {
//         while(t--){
//             long long xo, n;
//             cin >> xo >> n;
            
//             // The net displacement resets or balances out every 4 steps.
//             long long rem = n % 4;
//             long long distantJump = 0;
            
//             // Calculate the delta for the current step based on remainder
//             if (rem == 1) distantJump = -n;
//             else if (rem == 2) distantJump = 1;
//             else if (rem == 3) distantJump = n + 1;
//             // rem == 0 means delta is 0
            
//             // If the starting coordinate is odd, the direction flips
//             if (xo % 2 != 0) {
//                 cout << xo - distantJump << "\n";
//             } else {
//                 cout << xo + distantJump << "\n";
//             }
//         }
//     }
//     return 0;
// }