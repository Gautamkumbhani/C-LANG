#include <stdio.h>

int main() 
{
   char ch = 'A';
   int a = 1, b;
   
   
   
   do {
      b = 1;
      do {
         printf("%c   ", ch);
         b++;
      } while (b <= 5);
      printf("\n");
      ch++;
      a++;
   } while (a <= 5);
   
   return 0;
}