#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"head.h"
void main()
{
    int x4=0;
    char v,pwd[100];

    printf("\nENTER THE PASSWORD ....\n");
    printf("\nPassword....\t");
    while(1)
    {

       v= getch();

        if(v==ENTER|| v==TAB)
        {
         pwd[x4]='\0';
         break;

        }else if(v==BKSP)
        {
            if(x4>0)
            {
                x4--;
                printf("\b  \b");
            }
        }else{
        pwd[x4++]=v;

        printf("* \b");
        }


}
Beep(2000,100);
}
