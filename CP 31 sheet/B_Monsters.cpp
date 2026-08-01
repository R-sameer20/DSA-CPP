#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

// void merge( vector<pair<long long , long long>> &a ,  vector<pair<long long , long long>> &b ,  vector<pair<long long , long long>> &res){
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     while(i<a.size() && j<b.size()){
//         if(a[i].first>=b[j].first){
//             res[k].first = a[i].first;
//             res[k].second = a[i].second;
//             i++ , k++;
//         }
//         else{
//             res[k].first = b[j].first;
//             res[k].second = b[j].second;
//             j++ , k++;
//         }                
//     }
//     if(i==a.size()){
//         while(j<b.size()){
//             res[k].first = b[j].first;
//             res[k].second = b[j].second;
//             j++ , k++;
//         }
//     }
//     if(j==b.size()){
//        while(i<a.size()){
//             res[k].first = a[i].first;
//             res[k].second = a[i].second;
//             i++ , k++;
//         } 
//     }

    
// }

// void mergeSort(vector<pair<long long , long long>> &arr){
//     long long n = arr.size();
//     if(n == 1)  return;
//     long long n1 = n/2 , n2 = n - (n/2);
//     vector<pair<long long , long long>>a(n1 , {0,0});
//     vector<pair<long long , long long>>b(n2 , {0,0});
//     for(long long i = 0 ; i<n1 ; i++){
//         a[i].first = arr[i].first;
//         a[i].second = arr[i].second;
        
//     }
//     for(long long i = 0 ; i<n2 ; i++){
//         b[i].first = arr[i+n1].first;
//         b[i].second = arr[i+n1].second;
        
//     }

//     mergeSort(a);
//     mergeSort(b);

//     merge(a , b , arr);

// }
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n , k;
        cin>>n>>k;
        // priority_queue<pair<long long , long long >>pq;
        // for(int i = 1 ; i<=n ; i++){
        //     long long val; 
        //     cin>>val;
        //     if(val > k ) pq.push({(val%k),i});
        //     else pq.push({val,i}); 

        // }
        // while(pq.size() > 0){
        //     cout<<pq.top().second<<" ";
        //     pq.pop();
        // }
        // cout<<"\n";





        vector<pair<long long , long long>>arr;
        for(int i = 1 ; i<=n ; i++){
            long long val;
            cin>>val;
            if(val > k && val%k!=0 ) arr.push_back({(val%k),i});
            else if(val%k == 0) arr.push_back({k,i});
            else arr.push_back({val,i});   
        }
        // sort(arr.rbegin() , arr.rend());
        sort(arr.begin(), arr.end(), [](const auto& a, const auto& b) {
            if (a.first != b.first) return a.first > b.first; 
            return a.second < b.second;         
        });
        for(auto x : arr){
            cout<<x.second<<" ";
        }
        cout<<"\n";


        // vector<pair<long long, long long>> arr;
        // for (int i = 1; i <= n; i++) {
        //     long long val;
        //     cin >> val;
        //     long long rem = val % k;
        //     if (rem == 0) rem = k;

            
        //     arr.push_back({-rem, i});   
        // }


        // sort(arr.begin(), arr.end());

        // for (auto x : arr) {
        //     cout << x.second << " ";
        // }
        // cout << "\n";

        
    }
    return 0;
}