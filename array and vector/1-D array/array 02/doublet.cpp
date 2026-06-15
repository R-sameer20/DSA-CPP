//#perfection:

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    int check;
    cout<<"\nEnter the vector size : ";
    cin>>size;
    vector <int> vec;
    cout<<"\n\nEnter the numbers : \n";
    for(int i = 0 ; i<=size ; i++){
        int temp = 0;
        cin>>temp;
        vec.push_back(temp);
    }

    cout<<"\n\nYou Enter : ";
    for(int i = 0 ; i<=size ; i++){
       cout<<vec[i]<<" ";
    }
    cout<<endl;
    
    cout<<"Enter the number whose doublet you want to check :";
    cin>>check;
    
    //cout<<"The doublets are : \n";

    for(int i = 0 ; i<=size; i++){
        for(int j = 1 ; j<=size ; j++){
            if((vec[i]+vec[j])==check){
                cout<<"("<<i<<","<<j<<")";
                cout<<endl;
            }
        }
    }

}