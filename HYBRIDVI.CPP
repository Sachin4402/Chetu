#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class Student{
    protected: int roll_no;
    public:void set(int x){
	roll_no=x;
    }
    void get(){
	cout<<"Roll_No.  :"<<roll_no<<endl;

    }
};
class test: virtual public Student{
    protected:
		int hindi,english;
    public: void get_marks(int x,int y){
	hindi=x;
	english=y;

    }
    void put(){
	cout<<"Hindi  "<<hindi<<endl;
	cout<<"English   "<<english<<endl;

    }
};
class Sport:virtual public Student{
    protected: int marks;
    public:
	    void set1(int x){
		marks =x;

	    }
	    void get1(){
		cout<<"Marks of Sport  "<<marks<<endl;

	    }
};
class Result:public test,public Sport{
    private:int sum;
    public: void total(){
	sum=hindi+english+marks;
	get();
	put();
	get1();
	cout<<"Total Marks  "<<sum;
    }
    };
int main(){
    Result R;
    R.set(01);
    R.get_marks(90,90);
    R.set1(80);
    R.total();
    return 0;
}