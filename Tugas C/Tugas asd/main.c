#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("input batas awal: ");
    scanf("%d",&x);
     printf("input batas akhir: ");
    scanf("%d",&y);

    int a = x%2;
    if (a == 0) {
         for (x; x<=y; x+=2) {

        printf("%d\n",x); }

    }

    else {
         for (int z = x+1; z<=y; z+=2) {

        printf("%d\n",z); }


    }

}
