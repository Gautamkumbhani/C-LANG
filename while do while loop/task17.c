#include <stdio.h>

int main() {
   int a = 1, b;
   
   
   
   while (a <= 5) {
      b = 1;
      while (b <= 5) {
         printf("%d   ", a);
         b++;
      }
      printf("\n");
      a++;
   }
   
   return 0;
}