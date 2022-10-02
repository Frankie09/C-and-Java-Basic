#include <stdio.h>
#include <stdlib.h>

 main()
{
    system("cls");
    int q;
    printf("=================================\n");
    printf(" Program Matematika Sederhana  \n");
    printf("=================================\n\n");

    printf("1. Luas Segitiga\n");
    printf("2. Matriks\n");
    printf("3. Jumlah huruf vokal\n");
    printf("Masukkan pilihan anda : ");
    scanf("%d",&q);

    if (q==1){
            system("cls");
       int jumlah;
    printf("------Luas Segitiga------\n");


        printf("masukkan tinggi = ");
        scanf("%d",&jumlah);
        float m = luassegitiga(jumlah);
        printf("Luas Segitiga adalah %.2f",m);
        printf("\nTekan apa saja untuk kembali menu utama");
   getch();
        return main();

    }else if(q==2){
        system("cls");
            printf("------Transpose Matriks------\n");
          matriks();

    }else if (q==3){
        system("cls");
            printf("------Menghitung huruf vokal------\n");
            vokal();
    }

}

int luassegitiga (int jumlah){


 for(int i = 1; i <= jumlah; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
  float z = (float)jumlah * (float)jumlah /2 ;
return z;





}

void matriks(){

 int t= 3;
    int u = 4;
   int a[t][u];
        for (int x = 0; x<t;x++){

        for(int j = 0; j<u;j++){
        printf("Masukkan matriks ke %d,%d : ",x,j);
        scanf("%d",&a[x][j]);
        }
        }
        printf("\n");


        for (int x = 0; x<t;x++){

        for(int j = 0; j<u;j++){
        printf("%d ",a[x][j]);

        }
        printf("\n");
        }

        printf("\nTranpose Matriks \n");
   for (int x = 0; x<u;x++){

    for(int j = 0; j<t;j++){
        printf("%d ",a[j][x]);

    }
    printf("\n");
   }
    printf("Tekan apa saja untuk kembali menu utama");
   getch();
    return main();
}

void vokal(){

   char isi[255];
    int a=0;

    printf("Masukkan kalimat : ");
    scanf(" %[^\n]",&isi);
    for (int i = 0; i<strlen(isi);i++){
        if (isi[i]=='a'){

            a+= 1;
        } else if (isi[i]=='i'){
           a+= 1;
        }else if (isi[i]=='u'){
           a+= 1;
        }else if (isi[i]=='e'){
           a+= 1;
        }else if (isi[i]=='o'){
           a+= 1;
        }else if (isi[i]=='A'){
           a+= 1;
        }else if (isi[i]=='I'){
           a+= 1;
        }else if (isi[i]=='U'){
           a+= 1;
        }else if (isi[i]=='E'){
           a+= 1;
        }else if (isi[i]=='O'){
           a+= 1;
        }
    }
    printf("Jumlah huruf vokal adalah : %d huruf\n",a);
    printf("\nTekan apa saja untuk kembali menu utama");

 getch();
    return main();
}
