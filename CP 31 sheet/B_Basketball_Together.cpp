#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// solution 1 my two pointer approch 
// int main(){
//         long long n , d ;
//         cin>>n>>d;
//         vector<long long> arr(n);
//         for(long long i = 0 ; i<n ; i++){
//             cin>>arr[i];
//         }
//         sort(arr.begin() , arr.end());

//         long long i = 0 , j = n-1;
//         long long winCount = 0;
//         long long currPower = arr[j];
//         while(i<j){
//             if(currPower > d){
//                 winCount++;
//                 j--;
//                 currPower=arr[j];
//             }
//             else{
//                 currPower+=arr[j];
//                 i++;
//             } 
            

//         }
//         if(currPower > d) winCount++;   
//         cout<<winCount<<"\n";
   
//     return 0;
// }


// solution  2 actual approch

int main(){
  
    long long n , d;
    cin>>n>>d;

    vector<long long > arr(n);
    for(long long i = 0 ; i<n ; i++){
         cin>>arr[i];
    }
    sort(arr.rbegin() , arr.rend());

    long long j = 0;
    long long size = n , ans = 0;

    while(size > 0 ){
        long long req = (d/arr[j])+1;
        if(req <= size){
            ans++;
            size-=req;
            j++;
        }
        else break;

        }
    cout<<ans<<"\n";

    return 0;
}