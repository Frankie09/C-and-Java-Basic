#include <stdio.h>
#include <stdlib.h>
#include<time.h>

FILE *fptr;
FILE *abc;
int  hrg[100],x,wadah1;
char nama[100][30];
char wadah2[100];
float diskon = 0.15;
float *ds;

struct pelanggan1 {

    char nama1[20];

    int jumlah,menu;

};
 struct pelanggan1 cs;



void DaftarMenu(){


        int e;
      printf("Masukkan Menu ke berapa : ");
      scanf("%i",&e);

      for(int i=0; i<e; i++)
     {
         if (hrg[i]==NULL){

        printf("Masukkan Menu ke-%i : ",i+1);
      scanf("%s", &nama[i]);
      printf("Masukkan harga per barang : Rp. ");
      scanf("%i",&hrg[i]);
         }




     }
     if (e> x){
        x = e;
     }else {
        printf("Daftar menu sudah berisi, lanjutkan ke nomor berikutnya..\n");
     }


 return admin();

};
void lihatmenu(){

    printf("\nDaftar Menu \n");
    printf("Menu\t\t\t\t\tHarga\n");
  for(int i=0; i<x; i++)
     {
      printf("%d.%s\t\t\t\tRp.%d\n",i+1,nama[i],hrg[i]);


     }

abc = fopen("menu.txt", "w");
fprintf(abc, "\nDaftar Menu \n");
fprintf(abc, "Menu\t\t\t\t\tHarga\n");
    for(int i=0; i<x; i++){

        fprintf(abc, "%d.%s\t\t\t\tRp.%d\n",i+1,nama[i],hrg[i]);
    }


fclose(abc);

}

void Tampilanpertama(){
int z ;

printf("RESTORAN\n");
printf("Anda siapa?\n");
printf("1.Admin\n");
printf("2.Pelanggan\n");

printf("Masukkan Pilihan Anda : ");
scanf("%d",&z);

if (z==1){
system("cls");
admin();

}else if (z==2){
    system("cls");
printf("Selamat datang di restoran kami!!!\n");
printf("Masukkan nama anda : ");
scanf(" %[^\n]",&cs.nama1);
    pelanggan();

}else {

    printf("Masukkan Pilihan yang benar");
    getch();
    return main();

}


}
void admin(){


int r;
printf("ADMIN RESTORAN\n");
printf("1.Lihat Menu\n");
printf("2.Tambah Menu\n");
printf("3.Balik ke awal \n");
printf("Masukkan Pilihan Anda : ");
scanf("%d",&r);
if (r==1){
    system("cls");

    lihatmenu();
    return admin();


}else if (r==2){
    DaftarMenu();
return admin();
}else if (r==3){
system("cls");
return Tampilanpertama();
}else {

printf("Pilihan tidak ada ");
getch();
return admin();
}


}


void pelanggan(){
    int r;


printf("\nHalo selamat datang %s\nSilahkan pilih menu :\n",cs.nama1);
printf("1.Lihat menu makanan\n");
printf("2.Cari menu termurah hingga termahal\n");
printf("3.cari menu termahal hingga termurahl \n");
printf("4.Pilih menu anda  \n");
printf("5.Cetak struk\n");
printf("Masukkan Pilihan Anda : ");
scanf("%d",&r);
if (r==1){
    system("cls");
   lihatmenu();
   return pelanggan();


}else if (r==2){
    system("cls");
    bubblesort1();
    return pelanggan();

}else if (r==3){
    system("cls");
    bubblesort2();
return pelanggan();
}else if (r==4){
    system("cls");
    pilihmenu();
    return pelanggan();

}else if (r==5){
    system("cls");
    cetakstruk();
    getch();
    return 0;


}else {

printf("Pilihan tidak ada ");
getch();
return pelanggan();


}




}

void bubblesort1(){

for (int a = 0; a<x;a++){

        for (int b = 0; b<x-a-1;b++){

            if (hrg[b]>hrg[b+1]){

                wadah1 = hrg[b];
                hrg[b]= hrg[b+1];
                hrg[b+1]= wadah1;
                strcpy(wadah2 , nama[b]);
                strcpy(nama[b], nama[b+1]);
                strcpy(nama[b+1], wadah2);


            }
        }
    }
}

void bubblesort2(){

for (int a = 0; a<x;a++){

        for (int b = 0; b<x-a-1;b++){

            if (hrg[b]<hrg[b+1]){

                wadah1 = hrg[b];
                hrg[b]= hrg[b+1];
                hrg[b+1]= wadah1;
                strcpy(wadah2 , nama[b]);
                strcpy(nama[b], nama[b+1]);
                strcpy(nama[b+1], wadah2);


            }
        }
    }
}

void pilihmenu(){


lihatmenu();
printf("\nMasukkan Menu yang anda pilih [1-%d] : ",x);
scanf("%d",&cs.menu);
if (cs.menu <1 || cs.menu >x){
    printf("Menu tidak ada ");
    getch();
    return pilihmenu();
} else {printf("\nMenu yang anda pilih adalah %s  dengan harga Rp.%d\n",nama[cs.menu-1],hrg[cs.menu-1]);
printf("Masukkan jumlah pesanan[diskon jika beli =>5] : ");
scanf("%d",&cs.jumlah);

}






}


void cetakstruk (){
    time_t t;
    localtime(&t);

if (cs.jumlah >= 5){

    int t;
    int q;
    ds = &diskon;

    t = cs.jumlah * hrg[cs.menu-1];
    printf("Nama Pembeli : %s\n",cs.nama1);
    printf("Pesanan :\n");
    printf("%s\nTotal Pembelian : %d x Rp.%d = Rp.%d \n",nama[cs.menu-1],cs.jumlah,hrg[cs.menu-1],t);
    q = t * *ds;
    printf("Diskon 15%% = Rp.%d  ",q);
    printf("\tTotal akhir  = Rp.%d  ",t-q);
    printf("\n%s", ctime(&t));
    printf("\n\n========Terima kasih========\n\n");

fptr = fopen("program.txt", "w");
fprintf(fptr, "Nama Pembeli : %s\n",cs.nama1);
fprintf(fptr, "Pesanan :\n");
fprintf(fptr, "%s\nTotal Pembelian : %d x Rp.%d = Rp.%d \n",nama[cs.menu-1],cs.jumlah,hrg[cs.menu-1],t);
fprintf(fptr, "Diskon 15%% = %d  ",q);
fprintf(fptr, "\tTotal akhir  = Rp.%d  ",t-q);

fclose(fptr);
}else if (cs.jumlah >=1 && cs.jumlah <5){
 int t;
 t = cs.jumlah * hrg[cs.menu-1];
 printf("Nama Pembeli : %s\n",cs.nama1);
 printf("Pesanan :");
 printf("%s\n\nTotal Pembelian : %d x Rp.%d = Rp.%d \n",nama[cs.menu-1],cs.jumlah,hrg[cs.menu-1],t);
 printf("\n%s", ctime(&t));
 printf("\n\n========Terima kasih========\n\n");
fptr = fopen("program.txt", "w");
fprintf(fptr, "Nama Pembeli : %s\n",cs.nama1);
fprintf(fptr, "Pesanan :\n");
fprintf(fptr, "%s\nTotal Pembelian : %d x Rp.%d = Rp.%d \n",nama[cs.menu-1],cs.jumlah,hrg[cs.menu-1],t);


fclose(fptr);
}else{
printf("Belum memilih menu");

}
}

int main(){


Tampilanpertama();

}

