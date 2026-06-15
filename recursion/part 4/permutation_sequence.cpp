#include<iostream>
#include<string>
using namespace std;
string permutation(string original ,  string ans , int k){
    int n = original.length();
    if(n==1){
        ans+=original;
        return ans;
    }
    int fact = 1;
    for(int i = 2 ; i<=(n-1) ; i++){
        fact*=i;
    }
    
    int idx = k/fact;
    if(k%fact==0) idx--;
    
    char ch = original[idx];
    string left = original.substr(0,idx);
    string right = original.substr(idx+1);

    int q = 1;
    if(k%fact==0) q=fact;
    else q= k%fact;

    return permutation(left+right , ans+ch , q );

}
int main(){
    int n = 3;
    string str = "";
    for(int i = 1 ; i<=n ; i++){
        str+=to_string(i);
    }
    int k =6;
    cout<<permutation(str,"",k);
}