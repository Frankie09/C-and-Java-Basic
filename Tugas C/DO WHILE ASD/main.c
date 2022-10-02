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

        do {
             printf("%d\n",x);
            x+=2;
        }
        while (x<=y);

    }

    else {
        do {
            printf("%d\n",x+1);
            x+=2;
        }
         while (x+1<=y);


    }
}
