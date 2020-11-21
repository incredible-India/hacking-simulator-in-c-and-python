#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#define ENTER 13
#define TAB 9
#define BKSP 8
#define ESC 27
 int i ,j;
void gotoxy(int ,int);
void gotoxy(int a  ,int b)
{
    COORD x;
    x.X=a;
    x.Y=b;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),x);

}

void  mhbox(int a ,int b, int c,char ch)
{
    extern int i ;
    for(i=0;i<a;i++)
    {
        gotoxy(b,c);
        printf("%c",ch);
        b++;
    }

}

void mvbox(int a,int b,int c,char ch)
{

    extern int j;
    for(j=0;j<a;j++)
    {

        gotoxy(b,c);
        printf("%c",ch);
        c++;
    }



}

void msqr(int a,int b,char ch)
{
    extern int i,j;
    for(i=0;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            if(i==0||j==b||i==a||j==1)
                printf("%c",ch);
            else
            printf(" ");
        }
          printf("\n");

    }




}
void setcolor(int ForgC)
{
     WORD wColor;


     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;


     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {

          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
}
