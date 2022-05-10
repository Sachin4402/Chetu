#include<stdio.h>
#include<conio.h>
struct A
{ int x;
char y;
float z;
};
int main()
{
struct A p;
p.x=5;
p.y='c';
p.z=10.2;
printf("%d %c %.2f",p.x,p.y,p.z);
printf("%d",sizeof(struct A));
return 0;
}
