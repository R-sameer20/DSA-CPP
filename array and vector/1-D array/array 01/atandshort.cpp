#include<iostream>
#include<vector>
using namespace std;
int main(){
     
    vector <int> v;
    v.push_back (5);
    v.push_back (12);
    v.push_back (55);
    v.push_back (5120);
    v.push_back (845);
    v.push_back (1558);
    v.push_back (55);
    v.push_back (4458);
    v.push_back (5478);
    v.push_back (0213);
    v.push_back (1456);
    v.push_back (0325);
    v.push_back (12);
    v.push_back (1468);
    v.push_back (0);
    v.push_back (245);
    v.push_back (369);

    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    cout<<v[3]<<endl;
    cout<<v[4]<<endl;
    cout<<v[5]<<endl;
    cout<<v[6]<<endl;
    cout<<v[7]<<endl;
    cout<<v[8]<<endl;
    cout<<v[9]<<endl;
    cout<<v[10]<<endl;
    cout<<v[11]<<endl;
    cout<<v[12]<<endl;
    cout<<v[13]<<endl;
    cout<<v[14]<<endl;
    cout<<v[15]<<endl;
    cout<<v[16]<<endl<<"\n";

    cout<<"size of vector   "<<v.size()<<endl;
    cout<<"capacity of vector   "<<v.capacity()<<endl<<"\n";

    cout<<"value of 3rd element before  "<<v[3]<<endl;
    v.at(3)=18;
    cout<<"value of 3rd element after v.at  "<<v[3]<<endl<<"\n";


     
}