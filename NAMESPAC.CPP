#include<stdio.h>
#include<conio.h>
#include<iostream.h>
namespace Ram
{
int a=20;
int value(int a){
return 2*a;
}
namespace Sita
{
int x=70;
int value(int x){
return x*100;}
}
int main(){
cout<<Ram::value(9)<<endl;
cout<<Sita::value(8);
return 0;
}
