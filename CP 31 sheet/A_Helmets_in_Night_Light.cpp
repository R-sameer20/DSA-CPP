// #include<iostream>
// #include<vector>
// #include<queue>
// #include<algorithm>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long n , k;
//         cin>>n>>k;
//         long long noOfHome[n] ;
//         long long costOfHome[n];
//         long long costP = n*k;
//         for(int i = 0 ; i<n ; i++){
//             cin>>noOfHome[i];
//         }
//         for(int i = 0 ; i<n ; i++){
//             cin>>costOfHome[i];
//         }

//         vector< pair<long long ,long long> > arr;
//         for(int i = 0 ; i<n ; i++){
//             arr.push_back({min(costOfHome[i] , k) , noOfHome[i]});
//         }
//         sort(arr.begin() , arr.end());
//         long long cost = k;
//         int i = 0;
//         n-=1;
//         while(i < arr.size() && n>0){
//             long long take = min(n, arr[i].second);
//             cost += (arr[i].first * take);
//             n -= take; 
//             i++;
//         }
        
//         costP > cost ? cout<<cost<<"\n" : cout<<costP<<"\n";

//     }
//     return 0;
// }

// heap logic

#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
typedef pair<long long, long long> p;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n , k;
        cin>>n>>k;
        long long noOfHome[n] ;
        long long costOfHome[n];
        long long costP = n*k;
        for(int i = 0 ; i<n ; i++){
            cin>>noOfHome[i];
        }
        for(int i = 0 ; i<n ; i++){
            cin>>costOfHome[i];
        }

        priority_queue<p, vector<p>, greater<p>> pq;
        for(int i = 0 ; i<n ; i++){
            pq.push({min(costOfHome[i], k), noOfHome[i]});
        }
        long long cost = k;
        n-=1;
        while(pq.size() > 0 && n>0){
            cost += (pq.top().first * min( n , pq.top().second));
            n-=pq.top().second;
            pq.pop();
        }
        
        costP > cost ? cout<<cost<<"\n" : cout<<costP<<"\n";

    }
    return 0;
}

