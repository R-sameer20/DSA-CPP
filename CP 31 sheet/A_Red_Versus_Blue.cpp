#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n , r ,b;
        cin>>n>>r>>b;
        string s ;
        long long redLen = r / (b+1);
        long long extraRed = r%(b+1);
        for(long long time = 1 ; time<=b+1 ; time++){
            for(long long i = 0 ; i<redLen ; i++){
                s+='R';
            }
            if(extraRed > 0){
                s+='R';
                extraRed--;
            }
            if(time!=b+1){
                s+='B';
            }

        }
        cout<<s<<"\n";

    }
    return 0;
}
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long n , r , b;
//         cin>>n>>r>>b;
//         string s;
//         // bool flag = false;
//         // if(b==1){
//         //     long long i = 0;
//         //     while(i<n){
//         //         s+='R';
//         //         if(i == n/2) s+='B';
//         //         i++;
//         //     }
//         //     flag = true;
//         //     cout<<s<<"\n";
//         // }
//         // if (flag) continue;
//         long long i = 0;
//         long long noOfRGroup = b+1;
//         long long RInEachGroup = r/(b+1);
//         long long Rcount = 0;
//         for(long long i = 0 ; i<n ; i++){
//             if(r<RInEachGroup) break;
//             if(Rcount == RInEachGroup  ){
//                 s+='B';
//                 b--;
//                 Rcount=0;
//             }
//             s+='R';
//             Rcount++;
//             r--;   
//         }
//         while(r>0){
//             s+='R';
//             r--; 
//         }
//         cout<<s<<"\n";
//     }
//     return 0;
// }