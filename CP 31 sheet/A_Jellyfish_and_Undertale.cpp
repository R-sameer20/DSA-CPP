#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long mx , st , n;
        cin>>mx>>st>>n;
        long long count = 0;
        for(int i = 0 ; i<n ; i++){
            long long val;
            cin>>val;
            count += min(val , mx-1);
        }

        // int i = 0;
        // while(st!=0){
        //     if(st<2 && i<n){
        //         st+=arr[i++];
        //         st = min(st , mx);
        //         st--;
        //         remainSecond++;
                
        //     }
        //     else{
        //         remainSecond++;
        //         st--;
        //     }
        // }

        
        long long remainSecond = st + count;
        cout<<remainSecond<<endl;
    }
    return 0;
}

