#include<iostream>
#include<vector>
using namespace std;


// // approch 1
// int main(){
//     int n;
//     cin>>n;
//     vector<int> f(n + 1 , 0);
//     int m;
//     cin>>m;
//     vector<int> l(n+1 , 0);
//     vector<int> r(n+1 , 0);
//     for(int i = 0 ; i<m ; i++){
//         int L , R;
//         cin>>L>>R;
//         l[L]++;
//         r[R]++;
//     }
//     f[1] = l[1];
//     for(int i = 2 ; i<=n ; i++){
//         f[i] = l[i] - r[i-1] + f[i-1];
//     }
//     vector<int> c(1000005 , 0);
//     for(int i = 0 ; i<=n ; i++){
//         int coins = f[i];
//         c[coins]++;
//     }
//     for(int i = c.size() - 2 ; i>=0 ; i--){
//         c[i] = c[i] + c[i+1];
//     }
//     int q; 
//     cin>>q;
//     while(q--){
//         int num;
//         cin>>num;
//         cout<<c[num]<<"\n";
//     }
//     return 0;
// }

// approch 2
int main(){
    int n;
    cin>>n;
    vector<int> f(n+10 , 0);
    int m;
    cin>>m;
    for(int i = 0 ; i<m ; i++){
        int L , R ;
        cin>>L>>R;
        f[L]++;
        f[R+1]--;
    }
    for(int i = 1 ; i<f.size() ; i++){
        f[i] = f[i] + f[i-1];
    }
    vector<int> c(1000005 , 0);
    for(int i = 0 ; i<=n ; i++){
        int coins = f[i];
        c[coins]++;
    }
    for(int i = c.size() - 2 ; i>=0 ; i--){
        c[i] = c[i] + c[i+1];
    }
    int q; 
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<c[num]<<"\n";
    }
    return 0;
}



// // my thoghtprocess to fill the boxes
// // partially accepted -> find the error
// int main(){
//     int n , m;
//     cin>>n>>m;
//     int l , r;
//     vector<int> day(n + 5 , 0);
//     for(int i = 0 ; i < m ; i++){
//         cin >> l >> r;
//         day[l] += 1;      
//         day[r + 1] -= 1;  
//     }
//     int coin = 0;
//     for(int i = 1 ; i <= n ; i++ ){
//         coin += day[i];  
//         day[i] = coin;   
//     }
//     // for(int i = 1 ; i<=n ; i++){
//     //     cout<<day[i]<<" ";
//     // }
//     vector<int> query(n+5 , 0);
//     for(int i = 0 ; i<n ; i++){
//         query[day[i]]++;
//     }
//     int pre = query[n-1];
//     for(int i = n-1 ; i>=0 ; i--){
//         query[i]+=pre;
//         pre = query[i];
//     }
//     int q ;
//     cin>>q;
//     for(int i = 0 ; i<q ; i++){
//         int n;
//         cin>>n;
//         cout<<query[n]<<"\n";
//     }
//     return 0; 
// }