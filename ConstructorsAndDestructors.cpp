#include<iostream>
using namespace std;
class A{
    int a,b
    ;
    public:
    A()
    {
        a = 0;b=0;
    }
    A(int x,int y)
    {
        a = x;b=y;
    }
    void display(){
        cout<<a<<"\n"<<b<<"\n";
    }
};

int main()
{
    A a;
    a.display();
}