#include <stdio.h>
#include <stdlib.h>


int main()
{
    int jumlah,x,i;
   printf("masukkan tinggi = ");
    scanf("%i",&jumlah);
    //BELUM SELESAI

     for ( int i = 1; i<=jumlah; i++){
            for (int x=i; x<jumlah ;x++) {
                printf(" ");
            }
    for (int x=0; x<i+i-1;x++) { // i+i-1 juga bisa gak usah 2 for
        printf("*");}
        printf("\n");

}
return main();
}
