#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a , b;
        cin>>a>>b;

        long long twoPowerInA = 0 , twoPowerInB = 0;
        while(a%2 == 0){
            a/=2;
            twoPowerInA++;
        }
        while(b%2 == 0){
            b/=2;
            twoPowerInB++;
        }

        if(a!=b) cout<<-1<<"\n";
        else{
            long long ans = (abs(twoPowerInA - twoPowerInB ) + 3 - 1 )/3;
            cout<<ans<<"\n";
        }
    }
    return 0;
}


// #include<bits/stdc++.h>

// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long a , b;
//         cin>>a>>b;
//         long long ra = a , rb = b;
//         while(ra%2==0) ra/=2;
//         while(rb%2==0) rb/=2;

        // while ((a & 1) == 0) { // Same as: while (a % 2 == 0)
        //     a >>= 1;           // Same as: a /= 2
        //     count_a++;
        // }

        // // Strip out factors of 2 from 'b' using bit shifts
        // while ((b & 1) == 0) {
        //     b >>= 1;
        //     count_b++;
        // }

//         if(ra!=rb) cout<<-1<<"\n";
//         else {
//             a /= ra;
//             b/= rb;
//             a = log2(a);
//             b = log2(b);

//             long long ans = (abs(a-b) + 3 - 1 )/3;
//             cout<<ans<<"\n";
//         }
//     }
// }

