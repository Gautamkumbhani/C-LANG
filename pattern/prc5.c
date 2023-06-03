#include <stdio.h>

int main() {
    int num = 1;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < i; j++) {
            printf("      ");
        }
        
        for (int k = i; k < 5; k++) {
            printf("%6d", num);
            num++;
        }
        
        printf("\n");
    }

    return 0;
}
