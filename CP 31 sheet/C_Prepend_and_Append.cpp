#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i = 0 , j = n-1 , ans = 0;
        while(i<=j  ){
            if(s[i]==s[j]){
                ans = j-i+1;
                break;
            }
            i++;
            j--;
        }
        cout<<ans<<endl;
    }
    return 0;
}