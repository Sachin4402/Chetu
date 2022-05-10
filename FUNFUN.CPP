
#include <iostream.h>
#include<conio.h>
int y=1;
class All {
    public:
    char a;
    All(){
	cout<<"Hello Brother"<<endl;
    }
  /*  All(){
        cin>>a;
        cout<<a<<endl;
    }*/

};
void pdata(){
      y++;
    cout<<"Hello its me !!!"<<endl;
    cout<<"Program is running"<<endl;
  
    cout<<y<<endl;
}
void fun(){
    cout<<"Again"<<endl<<"you are allowed to write";
    pdata();
   
}
int main(){
    All x;
    pdata();
    pdata();
    fun();
    fun();
    return 0;
    }
