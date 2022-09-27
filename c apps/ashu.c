#include<stdio.h>
#include<conio.h>
#include"head.h"
void main()
{
system("cls");
  mhbox(90,20,10,'-');
  mhbox(60,20,20,'-');
  mvbox(10,20,10,'-');
  mvbox(10,80,10,'-');

  setcolor(10);
  gotoxy(22,11);
  printf("Name : AB SIjk");
  setcolor(12);
  gotoxy(22,13);
  printf("Address : US Washin.");
   setcolor(15);
  gotoxy(22,15);
  printf("Info : Gadhe ka lund se khelne ka bda souk rakhte hai.. ");
     setcolor(46);
  gotoxy(22,17);
  printf("Barcode : ||||||||||||||||");


}
