#include <stdio.h>
#include <stdlib.h>

int main()
{

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

    }else {

        k = z[x];
         printf("Mediannya adalah %.1f",k);
    }




   }else {
        printf("Terlalu banyak, harus >=1 dan <= 100000");
        getch();
        system("cls");
        return main();
   }
}
