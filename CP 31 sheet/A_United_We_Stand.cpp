#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n), b , c;

        for(int i = 0 ; i<n ; i++){
            cin>>a[i];
        }
        int mx = INT_MIN;
        int mn = INT_MAX;
        for(int i = 0 ; i<n ; i++){
            mx = max(mx,a[i]);
        }
        
        for(int i = 0 ; i<n ; i++){
            if(a[i] != mx )  b.push_back(a[i]);
            else c.push_back(a[i]);
        }
        if(b.size() == 0 ) {
            cout<<-1<<endl;

        }
        else{
            cout<<b.size()<<" "<<c.size()<<endl;;
            for(int x : b){
                cout<<x<<" ";
            }
            cout<<endl;
            for(int x : c){
                cout<<x<<" ";
            }
        }


    }
    return 0;
}