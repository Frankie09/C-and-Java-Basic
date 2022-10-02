#include <stdio.h>
#include <stdlib.h>

int main()
{
     char isi[255];
    int a=0;

    printf("Masukkan kalimat : ");
    scanf("%[^\n]",&isi);
    for (int i = 0; i<strlen(isi);i++){
        if (isi[i]=='a' ){

            a+= 1;
        }
    }
    printf("Jumlah huruf vokal adalah : %d huruf",a);
    printf("\nTekan apa saja untuk kembali menu utama");
}
