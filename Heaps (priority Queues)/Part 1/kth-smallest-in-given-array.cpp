#include<iostream>
#include<queue>
#include <iterator>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {10,20,-4,6,18,24,105,118};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    // cout<<n<<endl;

    // method 1
    std::vector<int> brr(arr, arr + n);
    sort(brr.begin(),brr.end());
    cout<<"Method 1 : "<<brr[k-1]<<endl;

    // method 2
    std::vector<int> crr(arr, arr + n);
    for(int i = 0 ; i<k ; i++){
        int temp = crr[i];
        for(int j = i+1 ; j<n; j++){
            if(crr[j]<crr[i]){
                swap(crr[i] , crr[j]);
            }

        }
    }
    cout<<"Method 2 : "<<crr[k-1]<<endl;

    // Meyhod 3
    priority_queue< int , vector<int> , greater<int> > pq;
    for(int ele : arr){
        pq.push(ele);
    }
    for(int i = 1 ; i<k ; i++) pq.pop();
    cout<<"Method 3 : "<<pq.top()<<endl;

    // Meyhod 4 ultimate 
    priority_queue< int > maxHip;
    for(int i = 0 ; i< n ; i++){
        maxHip.push(arr[i]);
        if(maxHip.size() > k) maxHip.pop();
    }
    cout<<"Method 4 : "<<maxHip.top();
    
} 