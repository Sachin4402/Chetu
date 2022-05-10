#include<stdio.h>
#include<iostream.h>
#include<conio.h>
int linear(int a[],int s,int e)
{   int i=0;
int counter=0;
for(i=0;i<s;i++){
if(a[i]==e)
{
cout<<"Position of element found is :  "<<i+1;
counter=1;
break;}
}
return counter;
}
int main()
{
int counter=0;
int a[]={45,56,88,77,14,102,11,12,99};
int s=sizeof(a[] )/sizeof(int);
int e;
cin>>e;
int result;
result=linear(a,s,e);
if(result==0)
{cout<<"Not found";
return 0;
}