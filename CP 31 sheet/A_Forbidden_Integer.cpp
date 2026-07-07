#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , k , x;
        cin>>n>>k>>x;
        if(x!=1){
            cout<<"YES\n"<<n<<endl;
            for(int i = 0 ; i<n ; i++){
                cout<<1<<" ";
            } 
            cout<<endl; 
        }
        else{
            if(k==1){
                cout<<"NO"<<endl;
            }
            else if(k==2){
                if(n%2!=0){
                cout<<"NO"<<endl;
               }
               else{
                    cout<<"YES\n"<<n/2<<endl;
                    for(int i = 0 ; i<n/2 ; i++){
                        cout<<2<<" ";
                    }
                    cout<<endl;
                }

            }
            else {            
                if(n%2==0){
                    cout<<"YES\n"<<n/2<<endl;
                    for(int i = 0 ; i<n/2 ; i++){
                        cout<<2<<" ";
                    }
                    cout<<endl;
                }
                else{
                    cout<<"YES\n"<<((n-3)/2)+1<<endl;
                    for(int i = 0 ; i<(n-3)/2 ; i++){
                        cout<<2<<" ";
                    }
                    cout<<3<<endl;
                }
            }
        }
            
        
    }
    return 0;
}