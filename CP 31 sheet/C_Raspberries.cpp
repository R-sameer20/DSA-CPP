// right approch 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , k;
        cin>>n>>k;
        int ans = INT_MAX;
        int evenCount = 0;
        for(int i = 0 ; i<n ; i++){
            int val;
            cin>>val;
            if(val %k == 0) ans = 0;
            if(val%2 == 0) evenCount++;
            ans = min(ans , (k-(val%k)));
            if(k == 4){
                if(evenCount>=2) ans = min(ans , 0);
                else if(evenCount == 1) ans = min(ans , 1);
                else ans = min(ans , 2);
            }

        }
        cout<<ans<<endl;
    }
}



// my approch 
// #include<iostream>
// #include<vector>
// #include<limits>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n , k;
//         cin>>n>>k;
//         vector<int> arr(n);
//         for(int i = 0 ; i<n ; i++){
//             cin>>arr[i];
//         }
//         bool flag = false;
//         int evenCount  = 0 , oddCount = 0 , ans = INT_MAX;
//         if(k == 4){
//             for(int i = 0 ; i<n ; i++){
//                 if(arr[i]%k == 0){
//                     ans = 0;
//                     flag = true;
//                     break;
//                 }
//                 else if (arr[i]%2 == 0){
//                     evenCount++;
//                     if(evenCount>=2){
//                         ans = 0;
//                      break;
//                     }
//                 }
//                 else oddCount++;  
//                 if(arr[i] < k) ans = min(ans ,k-arr[i]);
//                 else ans = min(ans , (k-(arr[i]%k)));
//             }
//             if(ans!=0){
//                 if(evenCount>=2)ans = 0;
//                 else if(ans == 1) ans = 1;
//                 else if(evenCount == 1 || oddCount>=2) ans = 2;

//             }   
//         }
//         else{
//             for(int i = 0 ; i<n ; i++){
//                 if(arr[i]%k == 0){
//                     ans = 0;
//                     flag = true;
//                     break;
//                 }
//                 else ans = min(ans , (k-(arr[i]%k)));
//             }
            
//         }
//         cout<<ans<<"\n";
   
//     }    
          
// }