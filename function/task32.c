
// no argivment no return
/* A   A   A   A   A  
   B   B   B   B   B
   C   C   C   C   C
   D   D   D   D   D
   E   E   E   E   E           */

#include<stdio.h>
void gautam()
{

    char a,b;

    for ( a = 'A'; a <= 'E'; a++)
    {
        for( b = 'A'; b <= 'E'; b++)
        {
            printf("\t%c",a);
        }
            printf("\n",b);        
    }
    
}

int main(){

    printf("\n");
    gautam();
    printf("\n\n");
}