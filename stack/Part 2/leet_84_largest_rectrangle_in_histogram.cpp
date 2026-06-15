#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={2,1,5,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int Nse[n];
    int Pse[n];
    Nse[n-1] = n;
    Pse[0] = -1;
    stack<int> st;
    st.push(0);
    for(int i = 1 ; i<n ; i++){
        while(st.size()!=0 && arr[st.top()]>=arr[i]) st.pop();
        if(st.size()==0) Pse[i] = -1;
        else Pse[i] = st.top();
        st.push(i);
    }
    cout<<"Previous samllest element : ";
    for(int i = 0 ; i<n ; i++){
        cout<<Pse[i]<<" ";
    }
    cout<<endl;
    while(st.size()!=0){
        st.pop();
    }
    st.push(n-1);
        cout<<"Next samllest element : ";
    for(int i = n-2 ; i>=0 ; i--){
        while(st.size()!=0 && arr[st.top()]>=arr[i])  st.pop();
        if(st.size()==0) Nse[i]=n;
        else Nse[i] = st.top();
        st.push(i);
    }
    for(int i = 0 ; i<n ; i++){
        cout<<Nse[i]<<" ";
    }
    int area = 0;
    for(int i = 0 ; i<n ; i++){
        int a = arr[i]*(Nse[i]-Pse[i]-1);
        area = max(area,a);

    }
    cout<<endl<<area;
    
}





// my logic;
// int main(){
//     int arr[]={2,1,5,6,2,3};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int count = 0;

//     int area = arr[0];
//     for(int i = 0 ; i<n ; i++){
//         int j = i-1 , k = i+1;
//         count = 1;
//         while(j!=0 && arr[j]>=arr[i]){
//             count++;
//             j--;
//         }
//         while(k<n && arr[k]>=arr[i]){
//             count++;
//             k++;
//         }
//         area = max(area , count*arr[i]);
//     }
//     cout<<area;
// }