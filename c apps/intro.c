#include<stdio.h>
#include<conio.h>
#include"head.h"
void main()
{
  extern int i,j;
  char ch[]="Welcome to the hacking World....";
  char ph[]="This site is designed by two Programmers Abhishek Roshan And Himanshu Shamrma.. ";
  char m[]="Purpose of making this site is only for Entertainment in case something happen ";
  char f[]="We are not Responsible for that ........... ";
  printf("\n");
   for(i=0;i<strlen(ch);i++)
   {
    printf("%c",ch[i]);
    Sleep(20);
   }
  printf("\n");
    for(i=0;i<strlen(ph);i++)
   {
    printf("%c",ph[i]);
    Sleep(20);
   }
    printf("\n");
    for(i=0;i<strlen(m);i++)
   {
    printf("%c",m[i]);
    Sleep(20);
   }
    printf("\n");

    for(i=0;i<strlen(f);i++)
   {
    printf("%c",f[i]);
    Sleep(20);
   }
    printf("\n");

    system("color 03");
    Sleep(10);
    system("color 02");
 system("cls");
  exit(0);
}
