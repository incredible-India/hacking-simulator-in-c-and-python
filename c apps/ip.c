#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"head.h"
void setcolor(int);
void main()
{

 FILE *p;
 p=fopen("fifa.txt","r");
 char ch;
 ch=fgetc(p);
 while(!feof(p))
 {
   printf("%c",ch);
   Sleep(2);
   ch=fgetc(p);

 }
setcolor(89);
printf("\n COMPLEXREGION CompareFileTime.......\n ");

printf("Copying Database....");
printf("ip4..\n");
for(int i=0;i<=20;i++)
{
    printf("|");
    system("color 04");
    Beep(2000,100);

}

printf("\nCopying Caches....");
for(int i=0;i<=20;i++)
{  printf("Version protocol..%d\n",i);
setcolor(106);
    printf("-");

    Beep(2000,100);

}
printf("\nDownloading Basefile....\n");
printf("collecting info\n");
for(int i=0;i<=20;i++)
{
    printf("|");

    Beep(2000,100);

}

printf("\ncollecting files..\n");
for(int i=0;i<=20;i++)
{
    printf("|");
    setcolor(i);
    Beep(2000,100);

}
setcolor(8);
printf("\n waiting for responses");
for(int i=0;i<=20;i++)
{
    printf("-");
    setcolor(8);
    Beep(2000,100);

}
exit(0);


}
