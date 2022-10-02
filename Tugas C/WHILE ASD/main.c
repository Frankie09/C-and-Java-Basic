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


        while (x<=y) {
            printf("%d\n",x);
            x+=2;
        }

    }

    else {

         while (x+1<=y) {
            printf("%d\n",x+1);
            x+=2;
        }


    }
}
