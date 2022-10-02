#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("masukkan x = ");
    scanf("%i",&x);
    switch(x) {
        case  1 :
        printf("satu\n");
        break;
        case 2 :
        printf("dua\n");
        break;
        case 3 :
        printf("tiga\n");
        break;
        default :
            printf("tak dikenal\n");
    }
return main();
}
