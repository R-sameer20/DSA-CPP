#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long w, h;
        cin >> w >> h;

        long long k1; 
        cin >> k1;
        vector<long long> x_bottom(k1);
        for (int i = 0; i < k1; i++) cin >> x_bottom[i];

        
        long long k2; 
        cin >> k2;
        vector<long long> x_top(k2);
        for (int i = 0; i < k2; i++) cin >> x_top[i];

        
        long long k3; 
        cin >> k3;
        vector<long long> y_left(k3);
        for (int i = 0; i < k3; i++) cin >> y_left[i];

        
        long long k4; 
        cin >> k4;
        vector<long long> y_right(k4);
        for (int i = 0; i < k4; i++) cin >> y_right[i];

        long long a1 = h * (x_bottom[x_bottom.size() -1] - x_bottom[0]);
        long long a2 = h * (x_top[x_top.size() -1] - x_top[0]);

        long long a3 = w * (y_left[y_left.size() -1] - y_left[0]);
        long long a4 = w * (y_right[y_right.size() -1] - y_right[0]);

        cout<<max( max(a1,a2) , max(a3,a4) )<<"\n";

    }
    return 0;
}