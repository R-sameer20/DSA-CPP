#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n , k ;
        cin>>n>>k;
        
        vector<ll> arr(n);
        for(int i = 0 ; i<n ; i++){
            cin>>arr[i];
        }
        sort(arr.begin() , arr.end());
        
        
        vector<ll> preffix(n);
        preffix[0] = arr[0];
        for(int h = 1 ; h<n ; h++){
            preffix[h] = preffix[h-1]+arr[h];
        }
        int i = -1 , j = n-k-1;
        ll maxSum = INT_MIN;
        while(k--){
            if(i == -1){
                maxSum = preffix[j];
                i+=2;
                j++;
                k++;
            }
            else{
                ll tempSum = preffix[j] - preffix[i];
                maxSum = max(maxSum , tempSum );
                i+=2;
                j++;
            }
        }



        // while( k>0 && i<j ){
        //     ll currMin = arr[i] + arr[i+1];
        //     ll currMAx  = arr[j];
        //     ll nxtCurrMax = arr[j-1];
        //     if(currMin < currMAx && currMin < nxtCurrMax){
        //         i+=2;
        //         k--;
        //     }
        //     else{
        //         j--;
        //         k--;
        //     }


        // }
        // for(int m = i ; m<=j ; m++){
        //     maxSum+=arr[m];
        // }
        cout<<maxSum<<"\n";



    }

    return 0;


}