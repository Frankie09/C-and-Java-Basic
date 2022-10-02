#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
   printf("mau berapa kali? :");
    scanf("%d", &x);
    for (int i=0 ; i<x ; i++) {
        printf(" suka ke-%i\n", i+1);
    }
    return main();

}

