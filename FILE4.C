#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
int i=10;
char c='E';
float f=9.00;
FILE *p;
clrscr();
p=fopen("SACHIN.txt","w");
fprintf(p,"%i %c %.2f",i,c,f);
fclose(p);
getch();
}