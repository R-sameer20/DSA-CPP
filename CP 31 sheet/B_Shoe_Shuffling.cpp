#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> arr(n);
        map<long long  , long long > m;
        for(int i = 0 ; i<n ; i++){
            cin>>arr[i];
            m[arr[i]]++;
        }
        bool flag = true;
        for(auto x : m){
            if(x.second<=1){
                flag = false;
                break;
            }
        }
        if(!flag){
             cout<<-1<<"\n";
             continue;
        }

       
        vector<long long> initialPermutation(n);
        for(int i = 0 ; i<n ; i++){
            initialPermutation[i] = i+1;
        }
        long long l = 0 , r = 0;
        while(r<n){
            if(arr[l] == arr[r]) r++;
            else{
                rotate(initialPermutation.begin() + l , initialPermutation.begin() + l + 1 , initialPermutation.begin() + r);
                l = r;
            }
        }
        rotate(initialPermutation.begin() + l , initialPermutation.begin() + l + 1 , initialPermutation.begin() + r);
                
        for(auto x : initialPermutation){
            cout<<x<<" ";
        }
        cout<<"\n";

        
       

    }
    return 0;
}

// another approch get a frequenct arra first if any one have freq equal to 1 then return 1
// else now traverse original array and maintain the l and r t

// void rotate(long long i , long long j , vector<long long>& ans){
//     for(long long k = j ; k>=i ; k--){
//         ans.push_back(k);
//     }
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long n ;
//         cin>>n;
//         vector<long long>arr(n,0);
//         for(long long i = 0 ; i<n ; i++){
//             cin>>arr[i];
//         }

//         long long pre = arr[0];
//         vector<long long> ans ;
//         long long count = 0 , i = 0 ;
//         bool flag = true;
//         for( i = 0 ; i<n ; i++){
//             if(pre == arr[i]) count++;
//             else{
//                 if(count<=1) flag = false;
//                 else{
//                     rotate(i-count+1 , i , ans);
//                     pre = arr[i];
//                     count= 1;
//                 }
//             }
//             if(!flag) break;
//         }
//         if(!flag){
//             cout<<-1<<"\n";
//             continue;
//         }
//         if(count>0) rotate(i-count+1 , i , ans);

//         for(auto x :ans){
//             cout<<x<<" ";
//         }
//         cout<<"\n";

//     }
//     return 0;
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long n;
//         cin>>n;
//         vector<long long> arr(n,0);
//         for(int i = 0 ; i<n ; i++){
//             cin>>arr[i];
//         }
//         long long pre  = arr[0] , count = 0;
//         vector<pair<long long , long long>> pairOfAns;
//         long long i;
//         bool flag = true;
//         for( i = 0 ; i<n ; i++){
//             if(pre != arr[i] ){
//                 if(count < 1)  flag = false;
//                 else{
//                     pairOfAns.push_back({i-count+1 ,i - 1});
//                     pre = arr[i];
//                     count = 0;
//                 }
//             }
//             if(!flag) break;
//             else count++;    
//         }
//         if(!flag){
//             cout<<-1<<"\n";
//             continue;
//         }
//         if(count > 0) pairOfAns.push_back({i-count+1 ,i - 1});
//         i = 0;
//         while(i<pairOfAns.size()){
//             long long j = pairOfAns[i].second;
//             while(j>=pairOfAns[i].first){
//                 cout<<j<<" ";
//                 j--;
//             }
//             i++;
//         }
        
//     }
// }