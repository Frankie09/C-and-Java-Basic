#include <stdio.h>
#include <stdlib.h>

int main()
{

    for (int i=1; i<=9; i++){
            for (int x=9;x>i ;x--) {
                printf(" ");
            }
    for (int j=0; j<i;j++) { // i+i-1 juga bisa gak usah 2 for
        printf("*");}


    for (int j=1; j<i;j++) {
        printf("*");}
        printf("\n");


        }

}
