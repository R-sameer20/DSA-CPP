#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        int count = 0;
        for(int i = 0 ; i<n ; i++){
            cin>>arr[i];
            if(arr[i] ==2) count++;
        }
        if(!count) cout<<1<<endl;
        else if(count%2!=0) cout<<-1<<endl;
        else{
            int temp = 0;
            for(int i = 0 ; i<n ; i++){
                if(arr[i] == 2) temp++;
                if(temp == count/2){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }

    }
    return 0;

}