/* #include<iostream>
using namespace std;
class Complex{
    float x,y;
    public:
    Complex(){}
    Complex(float i, float j){
        x = i;
        y = j;
    }
    friend Complex operator+(Complex, Complex);
    void Display()
    {
        cout<<x<<" + "<<y<<"\n";
    }
};
//Complex Complex :: operator+(Complex c){
  //  return Complex((x+c.x),(y+c.y));
//}
Complex operator +(Complex a, Complex b){
    return Complex(a.x+b.x,a.y+b.y);
}

int main()
{
    Complex C1,C2,C3;
    C1 = Complex(1.5,3.5);
    C2 = Complex(2.6,2.1);
    //C3 = C1+C2;
    C3 = operator+(C1,C2);
    C1.Display();
    C2.Display();
    C3.Display();
} */



#include<iostream>
using namespace std;
class arr{
    int a[5];
    public:
    arr(int *x){
        for(int i = 0;i<5;i++){
            a[i] = x[i];
        }
    }
    int operator [](int k){
        cout<<"Overloading";
        return (a[k]);            
        }
};


int main(){
    int x[5] = {1,2,3,4,5};
    arr A(x);
    for(int i =0;i<5;i++){
        cout<<x[i]<<"\t";
    }
}