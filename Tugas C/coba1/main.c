#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a[1000];
    int i,j,n,x;
    printf("Masukan bnayak bilangan : ");
    scanf("%d",&n);
    for(i = 1 ; i <= n; i++ ){
        printf("Masukan Angka ke-%d : ",i);
        scanf("%d",&a[i]);
    }
    j = 9999 ;
    for (i = 1 ; i <= n ; i++){ //
        if (a[i] < j){
            j = a[i];
        } else{
            a[i] = j;
            x = a[i] ;
            j = x;
        }
    }
    printf("Nilai terkecila adalah : %d ",j);
    return 0;
}
