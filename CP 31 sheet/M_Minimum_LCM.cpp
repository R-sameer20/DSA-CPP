#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long smallestFactor = n;
        for(long long i = 2 ; i*i<=n ; i++){
            if(n%i == 0){
                smallestFactor = i;
                break;
            }
        }
        long long a = n/smallestFactor , b = n - a;
        cout<<a<<" "<<b<<"\n";
    }
    return 0;
}

// long long GCD(long long x , long long y){
//     return (y == 0) ? x : GCD(y , x%y);
// }

// long long LCM(long long x , long long y){
//     return (x / GCD(x , y)) * y;
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long n;
//         cin>>n;
//         long long a = 0 , b = 0;
//         long long globalMinLcm = INT_MAX , currentMinLcm = 0;

//         for(long long i = 1 ; i<=(n/2) ; i++){
//             currentMinLcm = LCM(i , n - i);
//             if(currentMinLcm < globalMinLcm){
//                 a = i ;
//                 b = n - i;
//                 globalMinLcm = currentMinLcm;
//             }
//         }

//         cout<<a<<" "<<b<<"\n";
//     }
//     return 0;
// }