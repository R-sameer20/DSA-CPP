#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& v){
    for(int i = 0 ; i<v.size() ; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void  merge_two(vector<int>& a , vector<int>& b ,vector<int>& res){
    int i = 0  , j = 0 , k = 0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]){
            res[k++]=a[i++];
        }
        else{
            res[k++]=b[j++];
        }
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

void merge_sort(vector<int>& v){
    int n = v.size();
    if(n==1) return;
    int n1 = n/2;
    int n2 = n - n/2;
    vector<int> a(n1);
    vector<int> b(n2);
    for(int i = 0 ; i<n1 ; i++){
        a[i]=v[i];
    }
    for(int i = 0 ; i<n2 ; i++){
        b[i]=v[i+n1];
    }

    merge_sort(a);
    merge_sort(b);

    merge_two(a,b,v);
    a.clear();
    b.clear();

}
int main(){
    int arr[]={2,6,9,8,4,1,0,66,99};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    display(v);
    merge_sort(v);
    display(v);

}