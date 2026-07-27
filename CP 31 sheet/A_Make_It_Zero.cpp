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
        for(int i = 0 ; i<n ; i++){
            cin>>arr[i];
        }
        bool flag = true;
        for(int i = 0 ; i<n ; i++){
            if(arr[i]!=0){
                flag = false;
                break;
            }
            else continue;;
        }
        if(!flag){
            if(n%2==0){
                cout<<2<<endl;
                cout<<1<<" "<<n<<endl;
                cout<<1<<" "<<n<<endl;
            }
            else{
                cout<<4<<endl;
                cout<<1<<" "<<n-1<<endl;
                cout<<1<<" "<<n-1<<endl;
                cout<<n-1<<" "<<n<<endl;
                cout<<n-1<<" "<<n<<endl;

            }
            
        }
        else cout<<0<<endl;


    }
    return 0;
}