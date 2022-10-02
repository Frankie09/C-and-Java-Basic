#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p;
    system("cls");
    printf("======== ELEGANT COMPETITIVE PROGRAMMING ========\n");
    printf("1. Undian Berhadiah\n");
    printf("2. Diatas rata-rata\n");
    printf("Pilih Menu : ");
    scanf("%d",&p);
    if(p==1){

         int a,b,x,y;
    printf("Masukkan kupon X : ");
    scanf("%d",&a);
    if (a>-200000 && a<200000){

        b = a;
    }else {
    printf("Angka terlalu besar ataupun kecil\n ");
     getch();
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

 getch();
 return main();



    }else if (p==2){
    int a,b;
    printf("Masukkan berapa baris : ");
    scanf("%d",&b);
    if (b>=1 && b<=50){
        int z[b];
    }else {
    printf("Angka kebesaran ataupun kekecilan \n");
     getch();
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
    getch();
    return main();
    }

}
