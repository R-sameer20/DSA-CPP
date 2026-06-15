#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i=1;
        bool flag = false;
        if(n%3 == 0){
            cout<<"Second"<<endl;
            continue;
        }
        while(i<=10){
            if((n%3)==1){
                n = n-1;
                if(n%3==0){
                    cout<<"First"<<endl;
                    flag = true;
                    break;
                }

            }
            else if (n%3==2){
                n = n+1;
                if(n%3==0){
                    cout<<"First"<<endl;
                    flag = true;
                    break;
                }
            }
            i++;

            
        }
        if(flag == false) cout<<"Second"<<endl;
        
        
                    
        
    }
}