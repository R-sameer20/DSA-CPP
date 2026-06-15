#include<iostream>
#include<vector>
using namespace std;
void display(vector <int> &vec ){
    for(int i = 0 ; i<vec.size() ; i++){
        if(i>vec.size()){
            break;
        }
        cout<<vec[i]<<" ";
        }
        cout<<"\n";
}

int main(){
    int n ;
    cout<<"Enter the number of elements :";
    cin>>n;

    vector<int>v;
    for(int i = 0 ; i<=n-1 ; i++ ){
        int temp ;
        cin>>temp;
        v.push_back(temp);
    } 
    cout<<"You entered :"<<"\n";
    display(v);

    cout<<endl<<v.size();

    int m = v.size();
    int i = 0 , j = m-1 ;
    while(i<j){
        if(v[i]==0){
            i++;
        }
        if(v[j]==1){
            j--;
        }
        if(i>j){
            break;
        }
        if(v[i]==1 && v[j]==0){
            int temp = v[i];
            v[i]=v[j];
            v[j]=temp;
            i++;
            j--;

        }
    }
    cout<<"sorted :"<<"\n";
    display(v);
}
