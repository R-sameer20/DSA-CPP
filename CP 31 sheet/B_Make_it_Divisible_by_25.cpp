#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int count1  = 0 , count2 = 0;
        string num = to_string(n);
        for(int i = num.size() - 1 ; i >= 0 ; i--){
            if(num[i] == '0'){
                int j = i - 1;
                while(j>=0){
                    if(num[j] == '0' || num[j] == '5')  break;
                    else{
                        j--;
                        count1++;
                    }
                }
                break;
            }
            else count1++;
        }
        
        for(int i = num.size() - 1 ; i >= 0 ; i--){
                if(num[i] == '5'){
                    int j = i - 1;
                    while(j>=0){
                        if(num[j] == '2' || num[j] == '7' )  break;
                        else{
                            count2++;
                            j--;
                        }
                    }
                    break;
                }
                else count2++;
            }
        cout<<min(count1 , count2)<<endl;
    }
    return 0;
}

