#include<iostream>
using namespace std;
class crickter{
    private:
    string name;
    int age;
    int NoTest;
    float avgRun;

    public:
    //setter
    void setname(string name){
        this->name = name;
    }
    void setage(int age){
        this->age = age;
    }
    void setNoTest(int NoTest){
        this->NoTest = NoTest;
    }
    void setavgRun(float avgRun){
        this->avgRun = avgRun;
    }

    // getter

    string getname(){
        return name;
    }
    int getage(){
        return age;
    }
    int getNoTest(){
        return NoTest;
    }
    float getavgRun(){
        return avgRun;
    }
}cr[20];
int main(){
    cr[0].setname("Virat Kohli");
    cr[0].setage(36);
    cr[0].setNoTest(113);
    cr[0].setavgRun(49.15);

    cr[1].setname("Joe Root");
    cr[1].setage(34);
    cr[1].setNoTest(142);
    cr[1].setavgRun(50.85);

    cr[2].setname("Rohit Sharma");
    cr[2].setage(38);
    cr[2].setNoTest(59);
    cr[2].setavgRun(45.46);

    cr[3].setname("Kane Williamson");
    cr[3].setage(35);
    cr[3].setNoTest(105);
    cr[3].setavgRun(54.95);

    cr[4].setname("Ravindra Jadeja");
    cr[4].setage(36);
    cr[4].setNoTest(72);
    cr[4].setavgRun(37.04);

    cr[5].setname("Steve Smith");
    cr[5].setage(36);
    cr[5].setNoTest(105);
    cr[5].setavgRun(56.97);

    cr[6].setname("Ben Stokes");
    cr[6].setage(34);
    cr[6].setNoTest(102);
    cr[6].setavgRun(36.34);

    cr[7].setname("Marnus Labuschagne");
    cr[7].setage(31);
    cr[7].setNoTest(48);
    cr[7].setavgRun(52.00);

    cr[8].setname("KL Rahul");
    cr[8].setage(33);
    cr[8].setNoTest(50);
    cr[8].setavgRun(34.18);

    cr[9].setname("Jasprit Bumrah");
    cr[9].setage(32);
    cr[9].setNoTest(34);
    cr[9].setavgRun(22.40);

    cr[10].setname("Cheteshwar Pujara");
    cr[10].setage(37);
    cr[10].setNoTest(103);
    cr[10].setavgRun(43.60);

    cr[11].setname("Ravichandran Ashwin");
    cr[11].setage(39);
    cr[11].setNoTest(100);
    cr[11].setavgRun(26.40);

    cr[12].setname("David Warner");
    cr[12].setage(39);
    cr[12].setNoTest(112);
    cr[12].setavgRun(44.60);

    cr[13].setname("Ajinkya Rahane");
    cr[13].setage(37);
    cr[13].setNoTest(85);
    cr[13].setavgRun(38.46);

    cr[14].setname("Rishabh Pant");
    cr[14].setage(27);
    cr[14].setNoTest(33);
    cr[14].setavgRun(43.67);

    cr[15].setname("Shubman Gill");
    cr[15].setage(26);
    cr[15].setNoTest(25);
    cr[15].setavgRun(31.00);

    cr[16].setname("Pat Cummins");
    cr[16].setage(32);
    cr[16].setNoTest(61);
    cr[16].setavgRun(17.80); 

    cr[17].setname("Dean Elgar");
    cr[17].setage(37);
    cr[17].setNoTest(86);
    cr[17].setavgRun(37.00);

    cr[18].setname("Kraigg Brathwaite");
    cr[18].setage(32);
    cr[18].setNoTest(90);
    cr[18].setavgRun(34.00);

    cr[19].setname("Angelo Mathews");
    cr[19].setage(37);
    cr[19].setNoTest(106);
    cr[19].setavgRun(45.00);

for(int i = 0 ; i<20 ; i++){
    cout<<endl<<endl;
    cout<<cr[i].getname()<<endl;
    cout<<cr[i].getage()<<endl;
    cout<<cr[i].getNoTest()<<endl;
    cout<<cr[i].getavgRun()<<endl; 
}
}