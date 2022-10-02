#include <stdio.h>
#include <stdlib.h>

int main()
{
    int o;
    system("cls");
    printf("------TUGAS ASD------\n");
    printf("======MENU UTAMA======\n");
    printf("1. Kombinasi Kata\n");
    printf("2. Belah Ketupat\n");
    printf("3. Keluar\n");
    printf("Masukkan Pilihan Menu : ");
    scanf("%d",&o);

    if (o==1){
    system("cls");
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

    } else if (o==2){
  system("cls");
  printf("=====BELAH KETUPAT=====\n");
  int z, g, l;
  char a,b;

  printf("Masukkan angka : ");
  scanf("%d", &z);
  printf("Masukkan karakter ganjil : ");
  scanf(" %c",&a);
  printf("Masukkan karakter genap : ");
  scanf(" %c",&b);

  for (l = 1; l <= z; l++)
  {
        for (g = 1; g <= z-l; g++) {
          printf(" ");
        }


        for (g = 1; g <= 2*l-1; g++) {
            if (g % 2 == 0) {
                printf("%c",b);
            } else {
                printf("%c",a);
            }

        }


    printf("\n");
  }

  for (l = 1; l <= z - 1; l++)
  {
        for (g = 1; g <= l; g++) {
         printf(" ");
        }


        for (g = 1 ; g <= 2*(z-l)-1; g++) {
         if (g % 2 == 0) {
                printf("%c",b);
            } else {
                printf("%c",a);
            }
        }


    printf("\n");
  }
  printf("\n\n");
  printf("Tekan apa saja untuk kembali ke menu utama\n");
    getch();
    return main();
    } else if (o==3){
    printf("\n\n----------------------------------------");
    }
}
