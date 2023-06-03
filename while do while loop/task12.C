#include<stdio.h>
int main()
{

    char ch=1;

    do
    {
        printf("\n %c - %c",ch+64,ch+64+32);
        ch++;
    }while(ch <= 26);
    
    
    return 0;



}