#include<iostream>
using namespace std;
class A{
    protected:
    int a_ka_Protected;

    private:
    int a_ka_Private;

    public:
    int a_ka_Public;

    void show_A(){
        cout<<a_ka_Public;
        cout<<endl;
        cout<<a_ka_Protected; 
        cout<<endl;
        cout<<a_ka_Private;
    }

    A(){
        cout<<"A ka constructor call hua :";
        cout<<endl;
    }
    
};

class B : virtual public A {

    protected:
    int b_ka_Protected;

    private:
    int b_ka_Private;

    public:
    int b_ka_Public;

    void show_B(){
        cout<<a_ka_Public;
        cout<<endl;
        cout<<a_ka_Protected; 
        cout<<endl;
        
        cout<<b_ka_Public;
        cout<<endl;
        cout<<b_ka_Protected;
        cout<<endl;
        cout<<b_ka_Private;

    }

    B(){
        cout<<"B ka constructor call hua :";
        cout<<endl; 
    }
};

class C :virtual public A {

    protected:
    int c_ka_Protected;

    private:
    int c_ka_Private;

    public:
    int c_ka_Public;

    void show_C(){
        // here only public , and protcted of class A is assced 
        // all object can ascessed within class 
        cout<<a_ka_Public;
        cout<<endl;
        cout<<a_ka_Protected; 
        cout<<endl;
        
        cout<<c_ka_Public;
        cout<<endl;
        cout<<c_ka_Protected;
        cout<<endl;
        cout<<c_ka_Private;


    }

    C(){
        cout<<"C ka constructor call hua :";
        cout<<endl; 
    }
};

//diamond problem
class D : public B , public C{

    protected:
    int d_ka_Protected;

    private:
    int d_ka_Private;

    public:
    int d_ka_Public;


    void show_D(){
        //cout<<a_ka_Public; 
        cout<<B::a_ka_Public;
    }

    D(){
        cout<<"D ka constructor call hua :";
        cout<<endl; 
    }
};

int main(){
    D x;
    x.b_ka_Public;

    cout<<endl;
    D y;
    y.a_ka_Public;


}