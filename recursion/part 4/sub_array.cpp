//only for unique elements
#include<iostream>
#include<vector>
using namespace std;
void  sub_array(int arr[] , int n , int idx , vector<int> ans){
    if(idx==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
         return;
    }
   
    sub_array(arr,n,idx+1,ans);
    if(ans.size()==0 || arr[idx-1]==ans[ans.size()-1]){
        ans.push_back(arr[idx]);
        sub_array(arr,n,idx+1,ans);
    }
    // else if(arr[idx-1]==ans[ans.size()-1]){
    //     ans.push_back(arr[idx]);
    //     sub_array(arr,n,idx+1,ans);
    // }
    

}

int main(){
    int arr[]={1,2,3,4,};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    sub_array(arr,n,0,v);
    
    
}