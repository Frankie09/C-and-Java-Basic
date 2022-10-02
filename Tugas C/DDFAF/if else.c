#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("masukkan x = ");
    scanf("%i",&x);
    //inline if cuma bisa 1 perintah
    (x <= 100?printf("nilai x lbh kecil dr 100\n"):printf("lebih dari 100\n"));
    // bisa banyak perintah
    if(x <= 100 && x != 0){
            printf("nilai x lbh kecil dr 100\n");
            printf("nilai x lbh kecil dr 100\n");
            printf("nilai x lbh kecil dr 100\n");
    }
    else if(x <= 1000)
        {
            printf("nilai lbh kecil dari 1000\n");
    }

     else {
            printf("lebih dari 1000\n");

    }

return main();
}
