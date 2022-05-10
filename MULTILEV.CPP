#include<iostream>
using namespace std;
class Student{
    public: 
        string name ;
        float TT ,marks,per;
        int roll_no;
        string subject;
    
};
class Nam:public Student{
   public:
        int x;   //No. of subject 
        int N();
        int s();
    
};
class Sub:public Nam{
   public :  int N(){
        cout<<"Enter Student Name: ";
        cin>>name;// Name of Student
        cout<<"Name :  "<<name<<endl; 
        return 0;
    }
    
   public: int s(){
        cin>>x;
        for (int i=1;i<=x;i++){
        cout<<"S.no :" << i <<endl; 
        cin>>subject;
        cin>>marks;
        cout<<"  Subject:  " <<subject<<"    "<<"    Marks  : "  <<  marks<<endl;
        }
        return 0;

    }
};
int  main()
{  
    Sub D;
    D.N();
    D.s();
    return 0;
}