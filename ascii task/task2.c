#include<stdio.h>
int main()
{
    
    char small,capital;

    printf("small character: ");
    scanf("%c",&small);

    capital = small-32;
    
    printf("capital character : %c",capital);
    
    return 0;

}