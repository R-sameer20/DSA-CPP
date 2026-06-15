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

class B : public A {

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

class C : private A {
    public:
    int c_ka_Public;

    protected:
    int c_ka_Protected;

    private:
    int c_ka_Private;

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
};

class D : protected A {

    protected:
    int d_ka_Protected;

    private:
    int d_ka_Private;

    public:
    int d_ka_Public;

    void show_D(){
        cout<<a_ka_Public;
        cout<<endl;
        cout<<a_ka_Protected; 
        cout<<endl;

        cout<<d_ka_Public;
        cout<<endl;
        cout<<d_ka_Protected;
        cout<<endl;
        cout<<d_ka_Private;

    }

    D(){
        cout<<"D ka constructor call hua :";
        cout<<endl;
    }
};

class E : A{
    public:
    int e_ka_Public;

    protected:
    int e_ka_Protected;

    private:
    int e_ka_Private;

    void show_E(){
        cout<<a_ka_Public;
        cout<<endl;
        cout<<a_ka_Protected; 
        cout<<endl;
        

        cout<<e_ka_Public;
        cout<<endl;
        cout<<e_ka_Protected;
        cout<<endl;
        cout<<e_ka_Private;
    }

};

//multi_level_inheritance
class F : public B{
    public:
    int f_ka_public;

    void show_F(){
        cout<<a_ka_Protected;
        cout<<a_ka_Public;

        cout<<b_ka_Protected;
        cout<<b_ka_Public;

        //cout<<d_ka_Private;

    }

    F(){
        cout<<"F ka constructor call hua :";
        cout<<endl;
    }
};


class G : public A , public B , private C , protected D{
    public:
    G(){
        cout<<"G ka constructor call hua :";
        cout<<endl;
    }
};

//diamond problem
class Diamond : public B , public C{

};

int main(){
  
    B x;
    x.a_ka_Public = 10;
    cout<<endl;
    x.b_ka_Public = 10;
    cout<<endl;

    F y;
    y.b_ka_Public;
    cout<<endl;
    y.f_ka_public;
    cout<<endl;

    cout<<endl;
    G w;
    w.b_ka_Public = 15;
    
    



    

}