// #include<iostream>
// #include<vector>
// using namespace std;

// void display(vector <int> &vec ){
//     for(int i = 0 ; i<vec.size() ; i++){
//         if(i>vec.size()){
//             break;
//         }
//         cout<<vec[i]<<" ";
//         }
//         cout<<"\n";
// }

// void sot(vector<int>&vec){
//     int n = vec.size();
//     int noz=0 , noo=0;
//     for(int i = 0 ; i<=n ; i++){
//         if(vec[i]==1){
//             noz++;
//         }
//         else{
//             noo++;
//         }
//     }
//     cout<<endl<<noz<<"  "<<noo;

//     for(int i = 0 ; i<=n ; i++){
//         if(i<noz){
//             vec[i]=0;
//         }
//         else{
//             vec[i]=1;
//         }
//     }
//     display(vec);
// }

// int main(){
//     vector<int> v;
    
//    v.push_back(0);
//    v.push_back(1);
//    v.push_back(0);
//    v.push_back(1);
//    v.push_back(1);
//    v.push_back(1);
//    v.push_back(0);
//    v.push_back(0);
//    v.push_back(1);
//    v.push_back(1);
//    v.push_back(1);
//    v.push_back(1);
//    v.push_back(0);
//    v.push_back(0);
//    v.push_back(1);
//    v.push_back(0);
//    v.push_back(1);

//    display(v);
//    cout<<endl;

//    sot(v);

// }