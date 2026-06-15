#include<iostream>
#include<string>
#include<vector>
using namespace std;
void store_duplicate_sub_string(string ans , string original ,vector<string>& v , bool flag){
    if(original==""){ //
        v.push_back(ans);
        return;
    }
    char ch = original[0];
    if(original.length()==1){
        if(flag==true) store_duplicate_sub_string(ans+ch,original.substr(1),v,true);
        store_duplicate_sub_string(ans,original.substr(1),v,true);
        return;
    }
    char dh = original[1];
    if(ch==dh){
        if(flag==true) store_duplicate_sub_string(ans+ch,original.substr(1),v,true);
        store_duplicate_sub_string(ans,original.substr(1),v,false);
    }
    else{
         if(flag==true) store_duplicate_sub_string(ans+ch,original.substr(1),v,true);
        store_duplicate_sub_string(ans,original.substr(1),v,true);
    }
   
}


int main(){
    string str = "aabccb";
    vector<string> v;
    cout<<endl<<"Sumstrings are : \n";
    store_duplicate_sub_string("",str,v,true);
    
    for(int i = 0 ; i<v.size() ; i++){
        cout<<v[i]<<endl;
    }
    
}