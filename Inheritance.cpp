#include<iostream>
using namespace std;
class B{
    int a;
    public:
    int b;
    void set_ab(void);
    int get_a(void);
    void show_a(void);
    void mul();

};
class D : public B{
    int c;
    public:
    //void mul();
    void display();
};

void B :: mul(){
    cout <<"Prod="<<(20*4)<<endl;
}

void B :: set_ab(){
    a = 5;b=10;
}

int B :: get_a(){
    return a;
}

void B :: show_a(){
    cout<<"a = "<<a<<endl;
}

/*void D :: mul()
{
    c = b * get_a();
}*/

void D :: display(){
    show_a();
    cout<<"b = "<<b<<endl;
    cout<<"c = "<<c<<endl;
}

int main(){
    D d;
    d.set_ab();
    d.mul();
    d.display();
}
