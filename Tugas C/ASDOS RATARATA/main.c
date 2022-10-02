#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("Masukkan berapa baris : ");
    scanf("%d",&b);
    if (b>=1 && b<=50){
        int z[b];
    }else {
    printf("Angka kebesaran ataupun kekecilan \n");
    return main();
    }

    for (int e =0;e<b;e++){

    printf("\nMasukkan berapa siswa : ");
    scanf("%d",&a);

    int t[a];
    for(int i = 1; i<=a;i++){

        printf("Anak  %d : ",i);
        scanf("%d",&t[i]);
    }

    float r = 0;
     for(int i = 1; i<=a;i++){
        r+= t[i];
    }


    float z = r / a;


    float q =0;
       for(int i = 1; i <=a;i++){

       if (t[i]>z){
        q+=1;
       }
       }
    float y = (q/a)*100;
    printf("\nJumlah siswa yang diatas rata- rata = %.3f%%",y);

    }

}
