#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
   printf("masukkan tinggi = ");
    scanf("%d",&i);
     for ( j<=i; j++){
            for (int x=5;x>i ;x--) {
                printf(" ");
            }
    for (int j=0; j<i+i-1;j++) { // i+i-1 juga bisa gak usah 2 for
        printf("*");}
        printf("\n");

}
return main();
}
