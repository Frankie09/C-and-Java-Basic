#include <stdio.h>
#include <stdlib.h>

int main()
{
   int v;

   printf("======MENU=====\n");
   printf("1. Median\n");
   printf("2. Jerapah\n");
   printf("Pilih Menu : ");
   scanf("%d",&v);

   if (v==1){
         int n;
   printf("Masukkan Berapa banyak Data : ");
   scanf("%d",&n);

   if (1<=n && n<= 100000){

    int z[n];
    for(int i = 0; i<n;i++){
        printf("Masukkan Data ke-%d: ",i+1);
        scanf("%d",&z[i]);
        if(z[i]<1 || z[i]>100){
            printf("Data harus >=1 dan <= 100");
            getchar();
            system("cls");
            return main();

        }
        }

    int wadah,t,u;

    for(t=0;t<n;t++){

        for (u=0;u<n-t-1;u++){
            if (z[u]>z[u+1]){
            wadah = z[u];
            z[u]=z[u+1];
            z[u+1]=wadah;
            }

        }
    }
    float k;
    int x;

    x = (n)/2;

    if (n%2 == 0){

        k = ( z[x]+  z[x-1]);
        printf("Mediannya adalah %.1f",k/2);
        getch();
        system("cls");
        return main();

    }else {

        k = z[x];
         printf("Mediannya adalah %.1f",k);
          getch();
          system("cls");
          return main();
    }




   }else {
        printf(" Data Harus >=1 dan <= 100000");
        getch();
        system("cls");
        return main();
   }


   }else if (v==2){
       int n,k;
   printf("Masukkan Berapa banyak jerapah : ");
   scanf("%d",&n);
    printf("Masukkan Jerapah dengan tinggi ke berapa : ");
    scanf("%d",&k);
   if (1<=k&& k<= n&& n<= 1000){

    int z[n];
    for(int i = 0; i<n;i++){
        printf("Masukkan tinggi jerapah %d: ",i+1);
        scanf("%d",&z[i]);
        if(z[i]<1 || z[i]>100000){
            printf("Data harus >=1 dan <= 100000");
            getchar();
            system("cls");
            return main();

        }
        }

    int wadah,t,u;

    for(t=0;t<n;t++){

        for (u=0;u<n-t-1;u++){
            if (z[u]>z[u+1]){
            wadah = z[u];
            z[u]=z[u+1];
            z[u+1]=wadah;
            }

        }
    }

         printf("Jerapah dengan terpendek ke-%d adalah %d",k,z[k-1]);
         getch();
         system("cls");
         return main();









   }else {
        printf("Data harus >=1 dan <= 1000");
        getch();
        system("cls");
        return main();
   }

   }else if (v==3){
        return 0;
   }else {
    printf("Pilihan tidak ada ");
    getch();
    return 0;
   }
}
