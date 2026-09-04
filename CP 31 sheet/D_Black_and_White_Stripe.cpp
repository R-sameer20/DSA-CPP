#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n , k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<long long > wCount(n , 0);
        if(s[0] == 'W') wCount[0] = 1;
        else wCount[0] = 0;
        

        for(long long i = 1 ; i<n ; i++){
            if(s[i] == 'W') wCount[i] = wCount[i-1] + 1;
            else wCount[i] = wCount[i-1] ;
        }
        long long mn = INT_MAX;
        long long i = 0 , j = k-1;
        

        while(j<n){
            if((s[i] == 'B' && s[j] == 'B') || 
             (s[i] == 'B' && s[j] == 'W') ){
                mn =  min(mn , (wCount[j] - wCount[i]));
            }
            else mn =  min(mn , (wCount[j] - wCount[i] + 1));
            i++;
            j++;
        }
        cout<<mn<<"\n";
    }
    return 0;
}
