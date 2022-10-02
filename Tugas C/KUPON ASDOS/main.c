#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,x,y;
    printf("Masukkan kupon X : ");
    scanf("%d",&a);
    if (a>-200000 && a<200000){

        b = a;
    }else {
    printf("Angka terlalu besar ataupun kecil\n ");
    return main();
    }

    printf("%d",b);

     printf("\nMasukkan berapa kupon : ");
    scanf("%d",&x);


    int t[x];
    for(int i = 0; i<x;i++){

        printf("Kupon  %d : ",i+1);
        scanf("%d",&t[i]);
    }
int z[x];
    for(int i = 0; i<x;i++){

        int r= t[i]-b;

        if (r<=0){

            z[i]=r*-1;
        }else {
            z[i]=r;
        }

    }



    int maks = 400000; // soalnya kalo dari -199999 sampai 199999 itu maksnya cuma 400000
 for(int i = 0; i<x;i++){
        if(z[i]<maks){
            maks = z[i];
        }

    }



int maks2 = 200000;
for(int i = 0; i<x;i++){
        if(z[i]==maks){
        if(t[i]<maks2){
            maks2 = t[i];
        }
        }

    }
    printf("Pemenangnya adalah kupon %d",maks2);


}
