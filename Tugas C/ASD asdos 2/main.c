#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("KOMBINASI KATA\n");
    int a,b;
    char e[255],f[255];
    printf("Masukkan Batas Awal : ");
    scanf("%d",&a);
    printf("Masukkan Batas Akhir : ");
    scanf("%d",&b);
    printf("Masukkan Kata Pertama : ");
    scanf("%s",&e);
    printf("Masukkan Kata Kedua : ");
    scanf("%s",&f);
    printf("\n");

    printf("Hasil :\n");

    if(a % 2 == 1) {

    for ( a; a<= b;a++){
         if (a % 2 == 1) {
                printf("%s ",e);
            } else {
                printf("%s ",f);
            }

    }


    } else {
        for ( a; a<= b;a++){
         if (a % 2 == 0) {
                printf("%s ",e);
            } else {
                printf("%s ",f);
            }
    }





}
printf("\n\n");
  printf("Tekan apa saja untuk kembali ke menu utama\n");
    getch();
    return main();

     }

