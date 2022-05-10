#include<iostream.h>
#include<conio.h>
class A{
public: int n1,n2;
	A() {n1=n2=0;}
	A(int x,int y){
	n1=x;
	n2=y;
	}
	void pdata(){
		  cout<<"Number1   " <<n1 <<endl
		  <<"Number 2     "<<n2;
		  }
		  A operator +(A  &obj)
		  {
		  A temp;
		  temp.n1=n1+obj.n1;
		  temp.n2=n2+obj.n2;
		  return temp;
		  }
		  };
		  int main(	){
		  A result;
		  A m1(1,1);
		  A m2(2,2);
		  //A m3(2,2);
		  result.pdata();
		  return 0;
		  }
