#include<iostream>
#include<vector>
using namespace std;
void  print_array_subset(int arr[] , int n , int idx , vector<int> ans){
    if(idx==n){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
         return;
    }
   
    print_array_subset(arr,n,idx+1,ans);
    ans.push_back(arr[idx]);
    print_array_subset(arr,n,idx+1,ans);

}

int main(){
    int arr[]={26,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    print_array_subset(arr,n,0,v);
    
    
}