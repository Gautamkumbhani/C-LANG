#include <stdio.h>

int main() {
   int a = 5, b;
   
   
   
   do {
      b = 1;
      do {
         printf("%d   ", a);
         b++;
      } while (b <= 5);
      printf("\n");
      a--;
   } while (a >= 1);
   
   return 0;
}
