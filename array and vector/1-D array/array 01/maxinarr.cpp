#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n , x=0;
    bool flag = false;
    cout<<endl<<"Enter number of elements :";
    cin>>n;
    int arr[n];
   
    cout<<endl<<"Enter elements of array :";
    for(int i = 0 ; i<=n-1 ; i++){
        cin>>arr[i];
    }
    cout<<endl<<"Your entered elements :";
    for(int i = 0 ; i<=n-1 ; i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    int max=arr[0];
    for(int i=0 ; i<=n-1 ; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<endl<<"Maximum element of array = " << max;
}