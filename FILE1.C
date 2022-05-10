#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
char q='A';
FILE *p;
clrscr();
p=fopen("SACHIN.txt","w");
if(p==NULL)
{  printf("error");
  exit(1);
  }
  fputs(q,p);
  fclose(p);
  getch();
  }