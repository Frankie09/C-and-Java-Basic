#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("masukkan x = ");
    scanf("%i",&x);
    while (1) {
         if(x >= 0 && x <=50 || x == 0){
            printf("jelek\n");

    }
    else {
            printf("bagus\n");
    }

    }

}
