#include <stdio.h>
#include <stdlib.h>

int main()
{
    int wadah;
    int data[4] = {4,2,1,3};

    for (int a = 0; a<4;a++){

        for (int b = 0; b<4-a-1;b++){

            if (data[b]>data[b+1]){

                wadah = data[b];
                data[b]= data[b+1];
                data[b+1]= wadah;
            }
        }
    }

    for(int x = 0;x<4;x++){

        printf("%d ",data[x]);
    }
}




