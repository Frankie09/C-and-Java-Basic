#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,z;
    int data[26]={52,35,45,32,6,5,1,7,8,29,
                   20,34,87,23,66,102,156,314,231,515,
                   3531,623,7552,824,23,6};
    printf("Data yang dicari : ");
    scanf("%d",&x);
    for (  z = 0;z< 26;z++){

        if (x == data[z]){
            printf("Data yang anda cari ketemu di indeks ke %d",z+1);
            return 0;
        }else if (z == 25){

                printf("Data yang anda cari tidak ketemu!");
            }
        }
    }
