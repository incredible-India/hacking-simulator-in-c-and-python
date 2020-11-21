#include<stdio.h>
#include<conio.h>
#include"head.h"
int main()
{
    extern int i;

   for(i;i<=9;i++)
   {
 msqr(8,20,'-');
   gotoxy(4,4);
   printf("Access Denied");
 system("color 40");
 Sleep(15);
 system("color 04");
 Sleep(15);
 system("cls");
   }


exit(0);
}
