#include<iostream>
#include<stack>
using namespace std;

void reverce_display_recur(stack<int> &st){
    if(st.size()==0) return;
    int x = st.top();
    cout<<x<<" ";
    st.pop();
    reverce_display_recur(st);
    st.push(x);

}

void display_rec(stack<int> &st){
    if(st.size()==0) return;
    int x = st.top();
    st.pop();
    display_rec(st);
    cout<<x<<" ";
    st.push(x);
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    reverce_display_recur(st);
    cout<<endl;
    display_rec(st);
    
    



}