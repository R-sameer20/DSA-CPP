#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={-1,-8,0,5,-9};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    vector<int> suff(n);
    sort(v.begin(),v.end()); 

    suff[n-1]=v[n-1];
    for(int i = n-2 ; i>=0 ; i--){
        suff[i]=(suff[i+1]+v[i]);
    }
    int idx = -1;    
    for(int i = 0 ; i<n;i++){
        if(suff[i]>=0){
            idx=i;
            break;
        }
    }
    if(idx==-1){
        cout<<"0 satisfaction ";
        return 0;
    }
    int x = 1 ; 
    int max_sum = 0; 
    for(int i = idx ; i<n ; i++){
        max_sum+=(v[i]*x);
        x++;
    }
    cout<<max_sum;
    
    


}
