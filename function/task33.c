
// no argivment no return
/* 2   2   2   2   2
   4   4   4   4   4
   6   6   6   6   6
   8   8   8   8   8 
  10  10  10  10  10            */

  #include<stdio.h>
void gautam()
{

    int a,b;

    for ( a = 2; a <= 10; a+=2)
    {
        for( b = 1; b <= 5; b++)
        {
            printf("\t%d",a);
        }
            printf("\n",b);        
    }
    
}

int main()
{

    printf("\n");
    gautam();
    printf("\n\n");
}