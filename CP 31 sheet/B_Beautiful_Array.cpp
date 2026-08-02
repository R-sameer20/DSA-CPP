#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n , k , b , s;
        cin>>n>>k>>b>>s;

        long long lastEle = b*k ;
        long long remenToDistribute = s - lastEle ;
        long long potentialEle = remenToDistribute / (k-1);
        if(potentialEle > n -1 )cout<<-1<<"\n";
        else{
            long long otherEle = k - 1 ;
            cout<<lastEle<<" ";
            while(remenToDistribute > 0){
                if(remenToDistribute < otherEle ){
                    cout<<remenToDistribute<<" ";
                    break;
                }
                else{
                    cout<<otherEle<<" "; 
                    remenToDistribute-=otherEle;
                }   
            }
            cout<<"\n";
        }
    }
    return 0;
}