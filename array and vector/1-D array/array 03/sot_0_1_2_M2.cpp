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
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(2);
    v.push_back(2);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
 
 
    
    cout<<"You entered :"<<"\n";
    display(v);

    int m = v.size();
    int zero = 0 , one = 0 ,two = 0 ;
    for(int i = 0 ; i<=m-1 ; i++){
        if(v[i]==0){
            zero++;
        }
        if(v[i]==1){
            one++;
        }
        if(v[i]==2){
            two++;
        }
    }
    cout<<endl<<zero<<" "<<one<<" "<<two<<endl<<endl<<endl;
      
    
 
    int mid = 0 , low = 0 , high = v.size()-1;
    while(mid<=high){
        if(v[mid]==2){                      //always think about mid
            int temp = v[mid];              //0 to low-1 --> 0
            v[mid]=v[high];                 //high+1 to end --> 2
            v[high]=temp;                   //low to mid-1--> 1
            high--;

        }
     else if (v[mid]==0)
     {
          int temp = v[mid];
            v[mid]=v[low];
            v[low]=temp;
            low++;
            mid++;
     }
     else{
        mid++;
     }
     
    }
  
    cout<<"sorted :"<<"\n";
    display(v);


}