#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sub_sequence(int arr[] , int n , vector<int> ans , int idx, int k){
    if(idx==n){
        if(ans.size()==k){
            for(int i = 0 ; i<ans.size() ; i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
           
        }
        return;
    }
    else{
        if((ans.size()+(n-idx))<k) return;
        sub_sequence(arr, n , ans , idx+1 , k);
        ans.push_back(arr[idx]);
        sub_sequence(arr, n , ans , idx+1 , k);

    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    int k = 7;
    sub_sequence(arr, n , v , 0 , k);




}