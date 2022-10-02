#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,u;


        printf("Masukkan Panjang Matriks : ");
        scanf("%d",&t);
        printf("Masukkan Lebar Matriks : ");
        scanf("%d",&u);


        int a[t][u];
        for (int x = 0; x<t;x++){

        for(int j = 0; j<u;j++){
        printf("Masukkan matriks ke %d,%d : ",x,j);
        scanf("%d",&a[x][j]);
        }
        }
        printf("\n");


        for (int x = 0; x<t;x++){

        for(int j = 0; j<u;j++){
        printf("%d ",a[x][j]);

        }
        printf("\n");
        }

    int f = 0;

    printf("\nHasil jumlah : \n");

        for (int x = 0; x<t;x++){

        for(int j = 0; j<u;j++){
            f+= a[x][j];
        }

        }
        printf("%d\n",f);



   printf("\nRata rata matriks : \n");

   int o = f/(t*u);
   printf("%d\n",o);


    printf("\nGenap jadi x\n");
   for (int x = 0; x<t;x++){

    for(int j = 0; j<u;j++){
        if (a[x][j]%2==0) {

            printf("x ");
        } else {
            printf("%d ",a[x][j]);
        }

    }
    printf("\n");
   }



   printf("\nKelipatan 3 jadi t \n");


   for (int x = 0; x<t;x++){

    for(int j = 0; j<u;j++){
        if (a[x][j]%3==0) {

            printf("t ");
        } else {
            printf("%d ",a[x][j]);
        }

    }
    printf("\n");
   }

 printf("\nTranpose Matriks \n");
   for (int x = 0; x<u;x++){

    for(int j = 0; j<t;j++){
        printf("%d ",a[j][x]);

    }
    printf("\n");
   }


}
