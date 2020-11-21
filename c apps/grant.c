#include<stdio.h>
#include<conio.h>
#include"head.h"
int main()
{
    extern int i;

   for(i;i<=9;i++)
   {
  mhbox(20,31,12,'-');
  mhbox(20,31,16,'-');

   gotoxy(35,14);
   printf("Access Granted");
 system("color 20");
 Sleep(15);
 system("color 02");
 Sleep(15);
 system("cls");
   }


exit(0);
}
