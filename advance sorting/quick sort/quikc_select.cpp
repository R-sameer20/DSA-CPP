#include<iostream>
#include<vector>
using namespace std;
//O(n2 ) in worst ase
int partition(int arr[] , int si , int ei){
    int pivotElement = arr[si];
    int count = 0;
    for(int i = si+1 ; i<=ei ; i++){
        if(arr[i]<=pivotElement) count++;
    }
    int pivotIdx = count+si;
    swap(arr[si],arr[pivotIdx]);
    int i = si;
    int j = ei;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<=pivotElement) i++;
        if(arr[j]>pivotElement) j--;
        else if(arr[i]>pivotElement && arr[j]<pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        return pivotIdx;
    }
}
 
// int partition(int arr[] , int si , int ei){
//     int pivotElement = arr[(si+ei)/2];
//     int count = 0;
//     for(int i = si; i<=ei ; i++){
//         if(arr[i]==arr[(si+ei)/2]) continue;
//         else if(arr[i]<=pivotElement) count++;
//     }
//     int pivotIdx = count+si;
//     swap(arr[(si+ei)/2],arr[pivotIdx]);
//     int i = si;
//     int j = ei;
//     while(i<pivotIdx && j>pivotIdx){
//         if(arr[i]<=pivotElement) i++;
//         if(arr[j]>pivotElement) j--;
//         else if(arr[i]>pivotElement && arr[j]<pivotElement){
//             swap(arr[i],arr[j]);
//             i++;
//             j--;
//         }
//         return pivotIdx;
//     }
// }



int kth_smallest(int arr[],int si,int ei,int k){
   
    int pivotIdx = partition(arr,si,ei);

    if(pivotIdx+1==k) return arr[pivotIdx];

    else if(pivotIdx+1<k) return kth_smallest(arr,pivotIdx+1,ei,k);

    else return kth_smallest(arr,si,pivotIdx-1,k);
   
   
    
}

int main(){
    int arr[]={0,9,-8,-6,-3,1,2,4,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k = 4;
    cout<<endl<<kth_smallest(arr,0,n-1,k);
     
}