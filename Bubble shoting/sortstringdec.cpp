#include<iostream>
#include<string>
using namespace std;
int main(){
    // cout<<"Enter the string : ";
    // string str;
    // getline(cin,str);
    // cout<<endl;
    // cout<<"YOu entered : ";
    // for(int i=0 ; str[i]!='\0' ; i++){
    //     cout<<str[i];
    // }

    string str1 = "PAKDHWYEXBZXZYYYZYZELSIF";
    string check = "";
    for(int i = 0 ; i<str1.size() ; i++){
        if(str1[i]>='X'){
        check.push_back(str1[i]);
    }
    }
    cout<<endl;
    for(int i=0 ; check[i]!='\0' ; i++){
        cout<<check[i];
    }
    cout<<endl;

    for(int i = 0 ; i<check.size()-1 ;i++){
        bool flag = true;
            for(int j = 0 ; j<check.size()-1-i ; j++){
                if(check[j]>check[j+1]){
                    int temp = check[j];
                    check[j]=check[j+1];
                    check[j+1]=temp;
                    flag = false;

            }
        }
        if (flag==true){
            break;
        }
    

    }
    cout<<endl;
    for(int i=0 ; check[i]!='\0' ; i++){
        cout<<check[i];
    }


}
