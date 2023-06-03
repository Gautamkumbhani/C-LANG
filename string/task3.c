#include<stdio.h>
int main()
{

      char str[50],str1[50];
      int i,j,length;

      printf("enter string: ");
      gets(str);

      for ( i = 0; str[i] != '\0'; i++);
      //printf("length is: %d",i);

      length = i-1;

      for ( j = 0; j < i/2; j++)
      
      printf("%c %c ",str[j],str[length-j]);

      if (i % 2 != 0)
      
      printf("%c",str[i/2]);

      str1[i] = '\0';

      



}