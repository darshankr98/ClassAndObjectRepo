#include<iostream>
using namespace std;
class Simple{
    public :
    int a,b;
    public:
    void getdata()
    {
        cout<<"Enter Two Numbers";
        cin>>a>>b;
}
    void printdata()
    {
    cout<<a<<endl<<b<<endl;
}
};
/*void Simple :: getdata(void)
{
        cout<<"Enter Two Numbers";
        cin>>a>>b;
}
void Simple :: printdata(void)
{
    cout<<a<<endl<<b;
}*/

int main()
{
    Simple s;
    s.getdata();
    s.printdata();
    int x = s.a;
    cout<<x<<endl;
    return 0;
    cout<<"Hello";
}