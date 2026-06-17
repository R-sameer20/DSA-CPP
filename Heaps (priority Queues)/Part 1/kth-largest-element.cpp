#include<iostream>
#include<queue>
#include <iterator>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {10,20,-4,6,18,24,105,118};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
     
    priority_queue< int , vector<int> , greater<int> > minHip;
    for(int i = 0 ; i< n ; i++){
        minHip.push(arr[i]);
        if(minHip.size() > k) minHip.pop();
    }
    cout<<"Method 1 : "<<minHip.top();
    
} 