#include<iostream>
 using namespace std;
 class A{
     public: void p_data(){
         cout<<"Hello sir !!!"<<endl;
         
     }
    
 }
 class B:public A{
     public : void p_data(){
         cout<<" How are you feeling today ???"<<endl;
         cout <<" Good !!";
     }
 };
 int main(void){
     B b=B();
     b.p_data();
     return 0;
 } 