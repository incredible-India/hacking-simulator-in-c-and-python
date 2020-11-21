#include<stdio.h>
#include<conio.h>
#include"head.h"
void main()
{


 FILE *p;
 p=fopen("info.txt","r");
 char ch;
 ch=fgetc(p);
 while(!feof(p))
 {
   printf("%c",ch);

   ch=fgetc(p);

 }
 system("color 02");
 Beep(2000,120);
}
