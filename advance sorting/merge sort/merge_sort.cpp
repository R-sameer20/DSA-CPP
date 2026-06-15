#include<iostream>
#include<vector>
using namespace std;

//increasing order (assending)
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


//decendind order (decreasing)
// void merge( vector<int>& a ,  vector<int>& b ,  vector<int>& res){
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     while(i<a.size() && j<b.size()){
//         if(a[i]>=b[j]) res[k++]=a[i++];
//         else res[k++]=b[j++];                 
//     }
//     if(i==a.size()){
//         while(j<b.size()){
//             res[k++]=b[j++];
//         }
//     }
//     if(j==b.size()){
//        while(i<a.size()){
//             res[k++]=a[i++];
//         } 
//     }

    
// }

void merge_sort(vector<int>& v){
    int n = v.size();
    if(n==1) return;
    int n1=n/2 , n2= n - n/2;
    vector<int> a(n1);
    vector<int> b(n2);
    for(int i = 0 ; i<n1 ; i++){
        a[i]=v[i];
    }
    for(int i = 0 ; i<n2 ; i++){
        b[i]=v[i+n1];
    }

    //recursion
    merge_sort(a);
    merge_sort(b);

    //merging back
    merge(a,b,v);

    //deletation of new array to reduce space complexity
    a.clear();
    b.clear();
}
int main(){
    int arr[]={0,9,7,4,-9,-22,-856,-1,21,254,523,36};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    for(int i = 0 ; i<n ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    merge_sort(v);
    for(int i = 0 ; i<n ; i++){
        cout<<v[i]<<" ";
    }
}