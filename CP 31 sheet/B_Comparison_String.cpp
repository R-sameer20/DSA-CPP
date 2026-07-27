#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;;
        cin>>n;
        string s;
        cin>>s;
        int currentLongest = 1;
        int longestSame = 1;

        for(int i = 1 ; i<n ; i++){
            if(s[i] == s[i-1])  currentLongest++;
            else{
                longestSame = max(longestSame ,currentLongest );
                currentLongest = 1;
            }
        }
        longestSame = max(longestSame ,currentLongest );
        cout<<longestSame+1<<endl;

    }
}