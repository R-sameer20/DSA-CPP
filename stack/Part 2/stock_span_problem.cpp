#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[] = {100,80,60, 81 , 70,60,75,85};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i < n ; i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int pgi[n];
    pgi[0] =  1;
    stack<int> st;
    st.push(0);
    for(int i = 1 ; i<n ; i++){
        while(st.size()!=0 && arr[st.top()]<arr[i]){
            st.pop();
        }
        if(st.size()==0) pgi[i]=-1;
        else pgi[i] = st.top();
        pgi[i] = i- pgi[i];

        st.push(1);
    }
    for(int i = 0 ; i < n ; i++ ){
        cout<<pgi[i]<<" ";
    }
    cout<<endl;


}


// my logic
// int main(){
//     int stock_price[]={100,80,60, 81 , 70,60,75,85};
//     int n = sizeof(stock_price)/sizeof(stock_price[0]);
//     for(int i = 0 ; i<n ; i++){
//         cout<<stock_price[i]<<" ";
//     }
//     cout<<endl;
//     int ans[n];
//     ans[0] = 1;
//     stack<int> st;
//     stack<int> temp;
    
//     st.push(stock_price[0]);

//     int count;

//     for(int i = 1 ; i<n ; i++){
//         count = 1;
//         while(st.size()!=0 && st.top()<stock_price[i]){
//             temp.push(st.top());
//             st.pop();
//             count++;
//         }
//         if(temp.size()!=0){
//             while(temp.size()>0){
//             st.push(temp.top());
//             temp.pop();
//             }
        
//         }
//         ans[i] = count;
//         st.push(stock_price[i]);
//         count  = 1;
//     }
//     for(int i = 0 ; i<n ; i++){
//         cout<<ans[i]<<" ";
//     }

// }