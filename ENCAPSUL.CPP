#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class A{
    private : int a;
    public :void Num(){
        cout<<"enter a character for infinite loop : ";
        while(1){
      cin>>a;
        cout<<a++;
        }
    }
};
int main(){
    A b;
    b.Num();
    return 0;
}