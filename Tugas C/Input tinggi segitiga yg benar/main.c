#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
   printf("masukkan tinggi = ");
    scanf("%d",&i);
    //BELUM SELESAI

     for ( j=i;j<=1; j++){
            for (int x=5;x>i ;x--) {
                printf(" ");
            }
    for ( k=0; k<i+i-1;k++) { // i+i-1 juga bisa gak usah 2 for
        printf("*");}
        printf("\n");

}
return main();
}
