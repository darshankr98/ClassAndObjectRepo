#include<iostream>
using namespace std;
class alpha{
    int a;
    public:
    alpha(int x){
        a = x;
        cout<<"Alpha initialised\n";
    }
};

class beta{
    float d;
    public:
    beta(float g){
        d = g;
        cout<<"beta initialised\n";
    }
};

class gamma : public beta,public alpha{
    int m,n;
    public:
    gamma(int a,float b,int c,int d) : alpha(a),beta(b){
        cout<<"Gamma initialised \n";
        cout<<"m = "<<c<<"\n";
        cout<<"n = "<<d<<"\n";    
    }
};

int main(){
    gamma G(10,12.5,50,100);
}