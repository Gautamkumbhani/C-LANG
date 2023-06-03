
// no argivment with return
// enter a char and find char is vowel (a,e,i,o,u) or consonant?

#include<stdio.h>
#include<conio.h>
void gautam()
{

    char ch;

    printf("enter an alphabet: ");
    scanf("%c",&ch);

    if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')  
    {
        printf("\nit's a vowel");
    }
    else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("\nit's a vowel");
    }
    else
    {
        printf("\nit's a consonant");
    }

    return gautam;

}
int main()
{
    printf("......\n");
    gautam();
    printf("\n.......\n");

}