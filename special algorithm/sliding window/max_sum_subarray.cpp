#include<iostream>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    int max_sum = 0;
    int maxIdx = -1;
    int i = 1;
    int j = k;
    int presum = 0;
    for(int i = 0 ; i<k ; i++){
         presum +=arr[i];
    }
    max_sum=presum;
    while(j<=n-1){
        int currSum = presum + arr[j] - arr[i-1];
        if(max_sum < currSum){
            max_sum = currSum;
            maxIdx = i;
        }
        presum =currSum;
        i++;
        j++;
    }
    cout<<max_sum<<endl<<maxIdx;

    // for(int i = 0 ; i<=n-k ; i++){
    //     int temp = 0;
    //     for(int j = i ; j<i+k ; j++){
    //         temp+=arr[j];
    //     }
    //     if(max_sum<temp){
    //         max_sum = temp ;
    //         maxIdx  = i;
    //     }

    // }
    // cout<<max_sum;
    // cout<<endl<<maxIdx;
}