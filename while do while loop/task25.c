
/*    #include <stdio.h>

int main() {
   int c = 11;
   int a = 1, b;
   
   
   
   while (a <= 5) {
      b = 1;
      while (b <= 5) {
         printf("\t%d", c);
         c++;
         b++;
      }
      printf("\n");
      a++;
   }
   
   return 0;
}    */

#include<stdio.h>
int main()
{

    int a=1,b,c=11;

    while( a <= 5)
    {
        b=1;
        while(b <= 5)
        {
            printf("\t%d",c);
            c++;
            b++;
        }
        c+=5;
        printf("\n");
        a++;
    }

}    