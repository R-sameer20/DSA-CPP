#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n , x;
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
    
    cout<<"Enter the elements you want to check :";
    
    cin>>x;
    
    for(int i = 0 ; i<=n-1 ; i++){
        if(arr[i]==x){
            cout<<"Element is present :";
            break;
        }
        else{
            cout<<endl<<"Element is not present :";
            break;
        }
    }
    


}