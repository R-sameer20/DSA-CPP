#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){
    long long n ;
    cin>>n;
    string str ;
    cin>>str;
    int i = 0;
    bool flag = false;
    
    while(i<n-1){
        if(str[i] > str[i+1]){
            flag = true;
            break;
        }
        i++;
    }
    if(!flag) cout<<"No\n";
    else {
        cout<<"YES\n";
        cout<<i+1<<" "<<i+2;
    }
    return 0;
}