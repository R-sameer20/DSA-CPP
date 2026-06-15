#include<iostream>
#include<vector>
using namespace std;
//O(n2 ) in worst ase
// int partition(int arr[] , int si , int ei){
//     int pivotElement = arr[si];
//     int count = 0;
//     for(int i = si+1 ; i<=ei ; i++){
//         if(arr[i]<=pivotElement) count++;
//     }
//     int pivotIdx = count+si;
//     swap(arr[si],arr[pivotIdx]);
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

int partition(int arr[] , int si , int ei){
    int pivotElement = arr[(si+ei)/2];
    int count = 0;
    for(int i=si ; i<=ei ; i++){
        if(i==(si+ei)/2){ continue;}
        else if(arr[i]<=pivotElement){ count++;}
    }
    int pivotIdx = count+si;
    swap(arr[(si+ei)/2],arr[pivotIdx]);
    int i = si;
    int j = ei;
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<=pivotElement) i++;
        if(arr[j]>pivotElement) j--;
        else if(arr[i]>pivotElement && arr[j]<=pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        return pivotIdx;
    }
}

void quick_sort(int arr[],int si,int ei){
    if(si>=ei) return;
    int pivotIdx = partition(arr,si,ei);

    quick_sort(arr,si,pivotIdx-1);
    quick_sort(arr,pivotIdx+1,ei);
    
}

int main(){
    int arr[]={5,4,3,2,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quick_sort(arr,0,n-1);
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }   
}   