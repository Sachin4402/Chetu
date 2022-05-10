#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{ char q[60];
FILE *p;
clrscr();
p=fopen("SACHIN.txt","w");
if(p==NULL)
{
printf("error");
exit(1);
}
gets(q);
fputs(q,p);
fclose(p);
getch();
}