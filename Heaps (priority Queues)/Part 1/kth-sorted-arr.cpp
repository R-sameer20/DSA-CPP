#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[] = {10 , 9 ,8,7,4,70,60,50};
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    int k = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> ans;
    priority_queue< int , vector<int> , greater<int> > pq;
    int idx = 0; 
    for(int i = 0 ; i<n ; i++){
        pq.push(arr[i]);
        if(pq.size() > k){
            arr[idx++] = pq.top();
            pq.pop();
        }
    }
    while(pq.size()>0){
        arr[idx++] = pq.top();
        pq.pop();
    }
    
    
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
}