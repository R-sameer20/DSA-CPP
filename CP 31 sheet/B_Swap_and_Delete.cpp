// right approch
#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.size() == 1 ){
            cout<<1<<"\n";
            continue;
        }
        
        long long one = 0 , zero = 0;
        for(int i = 0 ; i<s.size() ; i++){
            s[i] == '0' ? zero++ : one++;
        }
        int i = 0;
        while(i<s.size()){
            if(s[i] == '0'){
                if(one!=0){
                    one--;
                }
                else break;
            }
            else{
                if(zero!=0){
                    zero--;
                }
                else break;
            }
            i++;
        }
        cout<<s.size() - i <<"\n";

    }
    return 0;
}




// my approch
// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         cin>>s;
//         if(s.size() == 0){
//             cout<<0<<"\n";
//             continue;
//         }
//         if(s.size() == 1){
//             cout<<1<<"\n";
//             continue;
//         }
        
//         long long cost = 0 , zero = 0 , one = 0;
//         long long mx = INT_MIN , currentMx = 0; 
//         char pre = s[0];
//         for(long long i = 0 ; i<s.size()  ; i++){
//             if(s[i] == pre) currentMx++;
//             else{
//                 mx = max ( currentMx , mx);
//                 pre = s[i];
//                 currentMx = 1;
//             }
//             s[i] == '0' ? zero++ : one++;      
//         }
        
//         if(zero == one){
//             cout<<0<<"\n";
//             continue;
//         }
//         else{
//             cost = s.size() - (2*min(one , zero));
//             int remSize = 2*min(one , zero);
//             mx <= (remSize/2)  ? cout<<cost<<"\n" : cout<<max(one , zero)<<"\n";
//         }
         
//     }
//     return 0;
// }