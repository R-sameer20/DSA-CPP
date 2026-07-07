#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0 ; i<n ; i++){
            cin>>arr[i];
        }
        int k = n + 1;
        for(int i = 0 ; i<n ; i++){
            arr[i] = k -arr[i];
            cout<<arr[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}