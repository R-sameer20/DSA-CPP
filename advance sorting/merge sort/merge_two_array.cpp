#include<iostream>
#include<vector>
using namespace std ;
void merge( vector<int>& a ,  vector<int>& b ,  vector<int>& res){
    int i = 0;
    int j = 0;
    int k = 0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]) res[k++]=a[i++];
        else res[k++]=b[j++];                 
    }
    if(i==a.size()){
        while(j<b.size()){
            res[k++]=b[j++];
        }
    }
    if(j==b.size()){
       while(i<a.size()){
            res[k++]=a[i++];
        } 
    }

    
}
int main(){
    int arr1[]={-965,-585,-222,-100,0,2,58,96};
    int arr2[]={-55,-25,-1,99,369,999,10000,200000};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);
    
    vector<int> a(arr1,arr1+m);
    vector<int> b(arr2,arr2+m);
    vector<int> res(n+m);
    merge(a,b,res);

    for(int i = 0 ; i<res.size() ; i++){
        cout<<res[i]<<" ";
    }

}