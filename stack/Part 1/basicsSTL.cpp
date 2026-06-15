#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;
    // Emptying the stack
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // Not emptying the stack top to bottom printing
    stack<int> temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        // int x = st.top();
        temp.push(st.top());
        st.pop();
    }
    cout<<endl;

    

    // putting element back to st from temp bottom to top printing
    while(temp.size()>0){
        // int x = temp.top();
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    
    



}