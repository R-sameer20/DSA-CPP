#include<iostream>
#include<string>
#include<vector>
using namespace std;
void store_subset(string ans , string original ,vector<string>& v){
    if(original.length()==0){
        v.push_back(ans);
        return;
    }
    else{
        char ch = original[0];
        store_subset(ans+ch,original.substr(1),v);
        store_subset(ans,original.substr(1),v);
    }
}


int main(){
    string str;
    cout<<"Enter the string with all unique letter : ";
    getline(cin,str);
    vector<string> v;
    cout<<endl<<"Sumstrings are : \n";
    store_subset("",str,v);
    for(string ele : v){
        cout<<ele<<endl;
    }
    
    
}