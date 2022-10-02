#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nomer[26]={5,4,6,7,1,2,3,8,9,10,32,34,35,28,19,30,44,55,33,66,77,88,99,100,54,23}; // mengisi angka bebas
    int angka;
    int n = 0;
    printf("Masukkan angka yang akan dicari : ");  // untuk input angka yang dicari
    scanf("%d",&angka);
    while ( n < 26){ // perulangan sebanyak data

        if (angka == nomer[n]){  // jika data sama dengan angka yang diinput maka print
            printf("Angka ada");
        } else if (n == 25){ // jika tidak ada maka print tidak ada

                printf("Angka tidak ditemukan");
            }
             n++;
        }

    }
