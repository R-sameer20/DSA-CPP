#include<iostream>
using namespace std;
int main(){
    int arr[]={5,0,1,2,0,0,4,0,3};
    //required 5 1 2 4 3 0 0 0 0 
    int n = 9;
    
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<"  ";
    }
//     for(int i = 0 ; i<n ; i++){
//         if(arr[i]==0){
//         int temp = arr[i];
//         arr[i]=arr[i+1];
//         arr[i+1]=temp;
//     }
// }
cout<<endl;
for(int i = 0 ; i<n-1; i++){
    for(int j = 0 ; j<n-1-i ; j++){
        if(arr[j]==0){
            int temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<<"  ";
    }


}