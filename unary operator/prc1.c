// ++   increament
// --   decreament

//         +1                         -1
//     increament                  deceament
//         ++                         --
// post         pre            post         pre
// i++          ++i            i--          --i

#include<stdio.h>
int main()
{

    int i=99;

    // i++;   // i+=1;  // i=i+1;

    printf("\n1 i= %d",++i);
    printf("\n2 i= %d",i--);
    printf("\n3 i= %d",i++);
    printf("\n4 i= %d",--i);
    printf("\n5 i= %d",++i);
    printf("\n6 i= %d",i--);
    printf("\n7 i= %d",i++);
    printf("\n8 i= %d",i--);
    printf("\n9 i= %d",++i);
    printf("\nx i= %d",i);
}