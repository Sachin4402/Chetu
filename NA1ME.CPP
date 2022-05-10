#include<iostream.h>
#include<stdio.h>
namespace A{
	int a=99;
	int value(int a){
	return 2*a;
	}
	}
	namespace B{
	int x=80;
	int value(int x){
	return x*100;
	}
	int main(){
	{cout<<A::value(8)<<endl;
	cout<<b::value(9);
	return 0;}

