
// no argivment no return
// print A-a  to  Z-z

#include<stdio.h>
void gautam()
{

    char ch;

    for ( ch = 1; ch <= 26; ch++)
    {
        printf("\n %c - %c",ch+64,ch+64+32);
    }

}

int main()
{
    printf("......\n");
    gautam();
    printf("\n......\n");
}