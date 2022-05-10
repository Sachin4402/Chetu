#include<iostream>
using namespace std;
class Area{
    public: virtual void pdata(){
        cout<<"finding area  ";
    }
};
class Rectangle: public Area{
    int pdata(){
        double a,b,c,d;
        cout<<"enter length, width, height ,radius";
        cin>>a >>  b  >>c  >>  d;
        cout<<"Area of Rectangle  :";
        return a*b*c;
    }
};
class Circle :public Area {
    int pdata(){
        cout<<"Area of Circle  :";
       return  3.14*d*d;
        
    }
};
int main(){
    Area *A;
    Area Ab;
    Rectangle r;
    Circle t;
    A=&Ab;
    A->pdata();
    A=&r;
    A->pdata();
    A= ?
    A->pdata();
  
}