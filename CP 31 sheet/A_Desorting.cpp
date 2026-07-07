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
        bool flag = false;
        int minDist = INT_MAX;
        for(int i = 1 ; i<n ; i++ ){
            if(arr[i] < arr[i-1]){
                cout<<0<<endl;
                flag = true;
                break;
            }
            else{
                int temp = arr[i] - arr[i-1];
                minDist = min(minDist , abs(temp));
            }
        }
        if(!flag){
            if(minDist ==0 || minDist==1){
                cout<<1<<endl;
            }
            else{
                cout<<(minDist/2 + 1)<<endl;
            }
            
        }
        else{
            continue;
        }
    }
}