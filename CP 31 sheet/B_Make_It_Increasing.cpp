#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i  = 0 ; i<n ; i++){
            cin>>arr[i];
        }
        long long steps = 0;
        if(n==1){
            cout<<0<<endl;
            continue;
        }

        long long arrMax = arr[n-1];
        if(arrMax == 0) {
            cout<<-1<<endl;
            continue;
        }
     
        int i = n-2;
        bool flag = true;
        while(i>=0){
            if( arr[i] == 0 && i>0 ){
                flag  = false;
                break;
            }
            while(arr[i]>=arr[i+1]){
                arr[i]= arr[i]/2;
                steps++;
            }
            arrMax = arr[i];
            if( arr[i] == 0 && i>0 ){
                flag  = false;
                break;
            } 
            i--;
        }
        if(flag){
            cout<<steps<<endl;
        }
        else cout<<-1<<endl;
        
    }
}