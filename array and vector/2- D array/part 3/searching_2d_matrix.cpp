#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector< vector<int> > v;
   
   vector<int> v1;
   v1.push_back(1);
   v1.push_back(4);
   v1.push_back(7);
   v1.push_back(11);
   v1.push_back(15);
   
   vector<int> v2;
   v2.push_back(2);
   v2.push_back(5);
   v2.push_back(8);
   v2.push_back(12);
   v2.push_back(19);

   vector<int> v3;
   v3.push_back(3);
   v3.push_back(6);
   v3.push_back(9);
   v3.push_back(16);
   v3.push_back(22);

   vector<int> v4;
   v4.push_back(10);
   v4.push_back(13);
   v4.push_back(14);
   v4.push_back(17);
   v4.push_back(24);

   vector<int> v5;
   v5.push_back(18);
   v5.push_back(21);
   v5.push_back(23);
   v5.push_back(26);
   v5.push_back(30);

   v.push_back(v1);
   v.push_back(v2);
   v.push_back(v3);
   v.push_back(v4);
   v.push_back(v5);

  cout<<"enter sorted matrix is :\n";
   for(int i=0 ; i<5 ; i++){
    for(int j = 0 ; j<5 ; j++){
        cout<<v[i][j]<<"\t";
    }
  cout<<endl;
   }

  int target ;
  cout<<"Enter the target number : ";
  cin>>target;
  bool check = false;
  //  int row=5;
  //  int col=5;
  int i=0 ;
  int j=4;
  while(i<5 && j>=0){
    if(v[i][j]==target){ 
      check=true;
    }
    else if(v[i][j]>target){
       j--;
      }
    else{ 
      i++;
    }
    }
    

  if(check==true){
    cout<<"\ntarget is present : ";
   }
  else{
     cout<<"\ntarget is not present : ";
   }    
}