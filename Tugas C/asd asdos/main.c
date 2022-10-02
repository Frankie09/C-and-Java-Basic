#include <stdio.h>
#include <stdlib.h>

int main()
{
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


}
