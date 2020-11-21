#include<stdio.h>
#include<conio.h>
#include"head.h"
void main()
{
system("cls");
  mhbox(50,20,10,'-');
  mhbox(50,20,20,'-');
  mvbox(10,20,10,'-');
  mvbox(10,70,10,'-');

  setcolor(10);
  gotoxy(22,11);
  printf("Name : Shivam Singh");
  setcolor(12);
  gotoxy(22,13);
  printf("Address : Railway station road Ghazipur");
   setcolor(15);
  gotoxy(22,15);
  printf("Info : bakri ka lund choos k bde hue hai");
     setcolor(46);
  gotoxy(22,17);
  printf("Barcode : ||||||||||||||||");


}
