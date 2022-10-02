#include <stdio.h>
#include <stdlib.h>

int main()
{

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









   }else {
        printf("Terlalu banyak, harus >=1 dan <= 1000");
        getch();
        system("cls");
        return main();
   }
}
