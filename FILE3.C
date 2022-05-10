#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{ int i;
char q[50];
FILE *p;
clrscr();
p=fopen("SACHIN.txt","w");
gets(q);
for(i=0;i<strlen(q);i++)
fputc
(q[i],p);
fclose(p);
getch();
}