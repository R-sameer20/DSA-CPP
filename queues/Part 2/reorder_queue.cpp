#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void reverse(queue<int>& q){
    stack<int> st;
    while(q.size()>0){
        int x = q.front();
        q.pop();
        st.push(x);
    }
    while(st.size()!=0){
        int x = st.top();
        st.pop();
        q.push(x);
    }
    

}
void display(queue<int>& q){
    int n = q.size();
    for(int i = 1 ; i<=n ; i++ ){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);

    }
    cout<<endl;

}
void reorder(queue<int>& q){
    stack<int> st;
    int n = q.size();
    for(int i = 1 ; i<=n/2 ; i++){
       st.push(q.front());
       q.pop(); 
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    for(int i = 1 ; i<=n/2 ; i++){
       st.push(q.front());
       q.pop(); 
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    reverse(q);
}
int main(){
    queue<int> q;
    int n ;
    cout<<"Enter size of queue :";
    cin>>n;
    cout<<endl;
    for(int i = 1 ; i<=n ; i++){
        cout<<i<<" ";
        q.push(i);
    }
    cout<<endl;
    reorder(q);
    display(q);
}
// my logic;
// void work_even(queue<int>& q , stack<int>& st , int n){
//     int h = n/2;
//     for(int i = 1 ; i<=h ; i++){
//         q.push(q.front());
//         q.pop();
//     }
//     for(int i = 1 ; i<=h ; i++){
//         st.push(q.front());
//         q.pop();
//     }
// }
// void work_odd(queue<int>& q , stack<int>& st , int n){
//     int h = n/2+1;
//     for(int i = 1 ; i<=h ; i++){
//         q.push(q.front());
//         q.pop();
//     }
//     for(int i = 1 ; i<h ; i++){
//         st.push(q.front());
//         q.pop();
//     }
// }
// int main(){
//     queue<int> q;
//     stack<int> st;
//     int n ;
//     cout<<"Enter size of queue :";
//     cin>>n;
//     cout<<endl;
//     int h = n/2;

//     for(int i = 1 ; i<=n ; i++){
//         q.push(i);
//         cout<<i<<" ";
//     }
//     if(h%2==0) work_even(q,st,n);
//     else work_odd(q,st,n);
    
    
//     for(int i = 1 ; i<=h ; i++){
//         q.push(st.top());
//         st.pop();
//     }
//     if(h%2==0) work_even(q,st,n);
//     else work_odd(q,st,n);
    
//     for(int i = 1 ; i<=h ; i++){
//         q.push(q.front());
//         q.push(st.top());
//         q.pop();
//         st.pop();

//     }
//     cout<<endl;
//     for(int i = 1 ; i<=n ; i++){
//         cout<<q.front()<<" ";
//         q.push(q.front());
//         q.pop();
//     }


    

// }