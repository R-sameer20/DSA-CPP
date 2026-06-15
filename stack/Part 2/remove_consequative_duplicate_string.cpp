#include<iostream>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
string removeDuplicate(string str){
    stack<char> st;
    int i = 0;
    st.push(i);
    for(i = 1; i<str.length(); i++){
        if(str[i]!=st.top()) st.push(str[i]);
    }
    str = "";
    while(st.size()>0){
        str+= st.top();
        st.pop();
    }
    reverse(str.begin() , str.end());
    return str;

}
int main(){
    string str = "aaabbbcdddefffghhiijklll";
    cout<<str<<endl;
    cout<<removeDuplicate(str);

   
}