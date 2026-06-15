#include<iostream>
#include<limits>
using namespace std;
int main(){
int arr1[]={4,8,-9,6,3,55,88,77,44,1};
int arr2[]={7,8,9,-9,-5,1,4,5,0,-8};
//method 1
int n = 10 , m = 10;
for(int i = 0 ; i<n ; i++){
    cout<<arr1[i]<<" ";
}
cout<<endl;
for(int i = 1 ; i<n ; i++){
    int j = i;
    while(j>=1){
        if(arr1[j]>=arr1[j-1]){
            break;
        }
        else{
            int temp = arr1[j];
            arr1[j]=arr1[j-1];
            arr1[j-1]=temp;
        }
        j--;
    }
    
  }
  
for(int i = 0 ; i<n ; i++){
    cout<<arr1[i]<<" ";
}
cout<<endl<<endl;


//method 2
   
for(int i = 0 ; i<m ; i++){
    cout<<arr2[i]<<" ";
}

for(int i = 1 ; i<m ; i++){
    int j = i;
        while(j>=1 && arr2[j]<arr2[j-1]){
        int temp = arr2[j];
            arr2[j]=arr2[j-1];
            arr2[j-1]=temp;
            j--;
        }
       
}
cout<<endl;
for(int i = 0 ; i<m ; i++){
    cout<<arr2[i]<<" ";
}
}