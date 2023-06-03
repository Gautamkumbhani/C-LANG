#include<stdio.h>

int main()
{

    char str[50],q[50];

    printf("enter your string : ");
    gets(str);

    int i,length,j;
    for ( i = 0; str[i] != '\0'; i++);
    // printf("length: %d",i);
    length = i;

    for ( j = 0; j <length; j++)
    {
        q[j] = str[--i];
    }
    q[j] = '\0';
    puts(q);
    
    
    
}