
#include <stdio.h>

int main() 
{
    int a = 1;
    do {
        int b = 1;
        do {
            printf("\t%d ", a);
            b++;
        } while (b <= a);
        printf("\n");
        a++;
    } while (a <= 5);

    return 0;
}
