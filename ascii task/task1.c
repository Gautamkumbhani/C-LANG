#include<stdio.h>
#include<conio.h>
int main()
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

    getch();

}