#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long int
using namespace std;

bool cmp(int x, int y){
    return x>y;
}

ll minCostToBreakGride( int n , int m , vector<int> &vertical , vector<int> &horizontal){
    ll ans = 0;
    sort(vertical.begin() , vertical.end() , cmp);
    sort(horizontal.begin() , horizontal.end() , cmp);

    int hr = 1 , vr = 1;

    int h = 0, v = 0;

    while( h < horizontal.size() && v < vertical.size() ){
        if(vertical[v] > horizontal[h] ){
            ans+=(vertical[v]*vr);
            hr++;
            v++;
        }
        else{
            ans+=(horizontal[h]*hr);
            vr++;

            h++;
        }
    }
    while( h < horizontal.size()){
        ans+=(horizontal[h]*hr);
        vr++;

        h++;    
    }

    while( v < vertical.size()){
        ans+=(vertical[v]*vr);
        hr++;
        v++;
    }

}

int main(){
    int n1 = 4, m1 = 4;
    vector<int> v1 = {2, 1, 3};
    vector<int> h1 = {4, 1, 2};
    cout << "Test Case 1: " << minCostToBreakGride(n1, m1, v1, h1) << "\n";

    int n2 = 1, m2 = 1;
    vector<int> v2 = {};
    vector<int> h2 = {};
    cout << "Test Case 2: " << minCostToBreakGride(n2, m2, v2, h2) << "\n";

    int n3 = 1, m3 = 5;
    vector<int> v3 = {4, 3, 2, 1};
    vector<int> h3 = {};
    cout << "Test Case 3: " << minCostToBreakGride(n3, m3, v3, h3) << "\n";

    int n4 = 5, m4 = 1;
    vector<int> v4 = {};
    vector<int> h4 = {5, 10, 15, 20};
    cout << "Test Case 4: " << minCostToBreakGride(n4, m4, v4, h4) << "\n";

    int n5 = 3, m5 = 3;
    vector<int> v5 = {5, 5};
    vector<int> h5 = {5, 5};
    cout << "Test Case 5: " << minCostToBreakGride(n5, m5, v5, h5) << "\n";

    int n6 = 3, m6 = 3;
    vector<int> v6 = {100, 200};
    vector<int> h6 = {1, 2};
    cout << "Test Case 6: " << minCostToBreakGride(n6, m6, v6, h6) << "\n";

    int n7 = 3, m7 = 3;
    vector<int> v7 = {1, 2};
    vector<int> h7 = {100, 200};
    cout << "Test Case 7: " << minCostToBreakGride(n7, m7, v7, h7) << "\n";

    int n8 = 4, m8 = 4;
    vector<int> v8 = {10, 30, 50};
    vector<int> h8 = {20, 40, 60};
    cout << "Test Case 8: " << minCostToBreakGride(n8, m8, v8, h8) << "\n";

    int n9 = 3, m9 = 4;
    vector<int> v9 = {15, 10};
    vector<int> h9 = {30, 20, 10};
    cout << "Test Case 9: " << minCostToBreakGride(n9, m9, v9, h9) << "\n";

    int n10 = 5, m10 = 5;
    vector<int> v10 = {1000, 2000, 3000, 4000};
    vector<int> h10 = {1500, 2500, 3500, 4500};
    cout << "Test Case 10: " << minCostToBreakGride(n10, m10, v10, h10) << "\n";

    

    return 0;

}