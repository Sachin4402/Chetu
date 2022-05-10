#include<stdio.h>
#include<conio.h>
int i;
int bs(int a[],int s,int key,int mid,int l,int r)
{
 while(l<=r)
 {
if(a[mid]==key)
 return key;
if(a[mid]<key)
l = mid+1;
else
r=mid-1;
}
return -1;
}
int main(void)
{
int a[]={11,12,13,14,15,16,17,18,19,20};
s=sizeof(a[])/sizeof(int);
int key;
cout<<"You Want to search   :";
cin>>key;
mid=l+(r-1)/2;
cout<<"Mid value = "<<mid;
int result;
result= bs(a,s,key,mid,0,s-1);
if(result==0)
{
 cout<<"Not found";
}
return 0;
}