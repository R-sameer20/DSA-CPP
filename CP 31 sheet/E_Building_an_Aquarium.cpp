#include<iostream>
#include<vector>
#define ll long long int
using namespace std;

bool canBuild(ll allowCapacity , ll n , vector<ll> &height , ll mid ){
    ll fillCapacity = 0;
    for(int i = 0 ; i<n ; i++){
        //if height < mid then that coloum contribut mid - height block of water in capacity

        if(height[i]<mid){
            fillCapacity+= (mid-height[i]);
            if(fillCapacity > allowCapacity) return false;
        }
    }

    if(fillCapacity <= allowCapacity) return true;
    return false ;
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        vector<ll> height(n);

        for(int i = 0 ; i<n ; i++){
            cin>>height[i];
        }

        ll lo = 1 , hi = 100000000000 , ans = 0; ;

        while(lo<=hi){
            ll mid = lo + ((hi - lo)/2);
            if(canBuild(x , n , height , mid)){
                ans = mid;
                lo = mid+1;
            }
            else{
                hi = mid - 1;
            }
        }

        cout<<ans<<"\n";

    }
}

// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include <climits>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n , x;
//         cin>>n>>x;

//         // min height req to the coloum to contribute in a 
//         // fullfilment of water requirement 
//         //1 1 1 -> each req min height is  2 2 2 => given height + 1;
//         vector<int> minHeight(n);
//         int mxheight = INT_MIN;
//         for(int i = 0 ; i<n ; i++){
//             cin>>minHeight[i];
//             mxheight = max(minHeight[i] , mxheight);
//             minHeight[i]++;
//         }

//         sort(minHeight.begin() , minHeight.end());

//         // arraay of height show that at this erticulat height how 
//         // much block contribute in water ful fillment start from o to the max height + 1

//         vector<int> height(mxheight , 0 );
//         for(int i = 0 ; i<n ; i++){
//             height[minHeight[i]] +=1;
//         }
//         int k = 1;
//         int mxHeight = 1;
//         while(k<=height.size() && x>=0 ){
//             if(height[k] == 0 ){
//                 height[k] = height[k - 1];
//             };
//             x-=height[k];
//             if(x>=0){
//                 mxHeight++;
//             }
//             k++;
//         }
//         if(x>=0){
//             mxHeight+=(x/n);
//         }

//         cout<<mxHeight<<"\n";
        



//     }

// }

