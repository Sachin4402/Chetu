#include<iostream.h>
#include<conio.h>
class Base{
    public: char n[20];

};
class Drived:public Base {
  public:  int m;
  int fun(){
      cin>>n;
      cin>>m;
      //cout<<n;
      return 0;
  }
};
void main(){
    Drived B;
    B.fun();
    cout<<"Value of N =  "<<B.n<<endl;
    cout<<"Value of M  =  "<<B.m;

    getch();
    }

