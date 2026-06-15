#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    stack<int> a;
    stack<int> b;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);

    while(st.size()>0){
        cout<<st.top()<<" ";
        a.push(st.top());
        st.pop();
    }
    cout<<endl;
    while(a.size()>0){
        b.push(a.top());
        a.pop();
    }
    while(b.size()>0){
        st.push(b.top());
        b.pop();
    }
    while(st.size()>0){
        cout<<st.top()<<" ";
        a.push(st.top());
        st.pop();
    }

    while(a.size()>0){
        st.push(a.top());
        a.pop();
    }

    // using array
    int arr[st.size()];
    int i = 0;
    int n = st.size();
    while(st.size()>0){
        arr[i] = st.top();
        st.pop();
        i++;
    }
    while(n>0){
        st.push(arr[n-1]);
        n--;
    }
    cout<<endl;
    while(st.size()>0){
        cout<<st.top()<<" ";
        a.push(st.top());
        st.pop();
    }


}