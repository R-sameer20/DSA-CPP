#include<iostream>
#include<string>
using namespace std;
// int multi_2(int k){
//     if(k==0) return 1;
//     // if(k==1) return 2;
//     int sum = 2*multi_2(k-1);
//     return sum;
// }
int binary_to_decimal(string &str){
    int n = str.size();
    int result = 0;
    for(int i=n-1 ; i>= 0 ; i--){
        char ch = str[i];
        int num = ch - '0';
        result = result + num*(1 <<( n - i - 1));
    }
    return result;
}
int main(){
    string str = "1111";
    cout<<binary_to_decimal(str)<<endl;
    return 0;


    //my code usinf recursion
    // int i = n-1;
    // while(i>=0){
    //     int k = n-i-1; //ascii value of 0 = 40 so 40-40 = 0, 49 -48 = 1
    //     sum+=(str[i]-'0')*multi_2(k);
    //     i--;
    // }
    // cout<<sum;
}