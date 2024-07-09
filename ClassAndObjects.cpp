// Program to illustrate the working of
// objects and class in C++ Programming

/*#include <iostream>
using namespace std;

// create a class
class Room {

   public:
    double length;
    double breadth;
    double height;

    double calculate_area() {
        return length * breadth;
    }

    double calculate_volume() {
        return length * breadth * height;
    }
};*/

//int main() {

    // create object of Room class
    //Room room1;

    // assign values to data members
    /*room1.length = 42.5;
    room1.breadth = 30.8;
    room1.height = 19.2;*/

    // calculate and display the area and volume of the room
    //cout << "Area of Room =  " << room1.calculate_area() << endl;
   // cout << "Volume of Room =  " << room1.calculate_volume() << endl;

    //return 0;
//}






#include <iostream>
using namespace std;
class Item
{
    static int Count;
    int number;
    public:
    void getdata(int a)
    {
        number = a;
        Count++;
    }
    void getcount(void)
    {
        cout<<"count:";
        cout<<Count<<"\n";
    }

};
int Item :: Count;
int main()
{
    Item a,b,c;
    a.getcount();
    b.getcount();
    c.getcount();
    a.getdata(100);
    b.getdata(200);
    c.getdata(300);
    cout<<"After reading data\n";
    a.getcount();
    b.getcount();
    c.getcount();
}