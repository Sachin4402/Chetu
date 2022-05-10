#include<stdio.h>
#include<conio.h>
void main()
{
char c[50]="file Handling";
FILE *p;
clrscr();
p=fopen("abc.txt","w");
if (p==NULL)
{
printf("Error");
exit(1);
}
fputs(c,p);
fclose(p);
getch();
}