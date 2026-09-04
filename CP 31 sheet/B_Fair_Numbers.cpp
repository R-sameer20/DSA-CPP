#include<iostream>
#include<vector>
#include<set>
using namespace std;

long long findN(long long n){
    long long nCopy = n;  
    while(nCopy > 0){
        if(nCopy%10!=0 && n%(nCopy%10)!=0 ){
            n++;
            nCopy = n;
        }
        else{
            nCopy/=10;
        }
    } 
    return n;   
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n ;
        cin>>n;
        long long ans = findN(n);
        cout<<ans<<"\n";
    }
}

// // relation use gcd(a,b) * lcm(a,b) = a*b;
// long long gcd(long long a, long long b) { 
//     return b == 0 ? a : gcd(b, a % b); 
// }
// long long lcm(long long a, long long b) { 
//     return (a / gcd(a, b)) * b; 
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long n;
//         cin>>n;
//         while(true){
//             if(n%reqDivider == 0){
//                 break;
//             }
//             else{
//                 n++;
//                 vector<long long> numDigitArray;
//             // set<long long> digitInN;
//             long long nCopy = n;
//             while(nCopy>0){
//                 numDigitArray.push_back(nCopy%10);
//                 // digitInN.insert(nCopy%10);
//                 nCopy/=10;
//             }
//             long long reqDivider = numDigitArray[0];
//             // long long reqDivider = 1;
//             for(int i = 0 ; i<numDigitArray.size() ; i++){
//                 reqDivider = lcm(reqDivider , numDigitArray[i]);
//             }
//             // for(auto x : digitInN){
//             //     reqDivider = gcd(reqDivider , x);
//             // }
//             }
//         }

//         cout<<n<<"\n";

//     }
// }