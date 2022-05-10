#include<iostream.h>
#include<conio.h>
class A{
private:
	char name[15];
	int age;
	long int mobile;
public:
	void get_data()
	{
	cout<<"Enter name :";
	cin>>name;
	cout<<"Enter age  :";
	cin>>age;
	cout<<"Enter Mobile  :";
	cin>>mobile;
	}
	void put_data()
	{
	cout<<"Name :"<<name<<endl;
	cout<<"Age  :"<<age<<endl;
	cout<<"Mobile  :"<<mobile<<endl;}
	};
	void main(){
	clrscr();
	A emp,emp1,emp2;
	emp.get_data();
	emp1.get_data();
	emp2.get_data();
	emp.put_data();
	emp1.put_data();
	emp2.put_data();
	 getch();
	 }