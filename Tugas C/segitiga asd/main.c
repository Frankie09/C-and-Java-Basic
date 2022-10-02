#include <stdio.h>
#include <stdlib.h>

int main()
{

int x,y;
  printf("Nilai alas = ");
  scanf("%d", &x);
  printf("Nilai tinggi = ");
  scanf("%d",&y);

  float z = x * y / 2;
  printf("Luas segitiga tersebut adalah = %.1f \n",z);

  char aa;

  printf("Apakah ingin melanjutkan?(y/t) ");
scanf(" %c",&aa);

    if (aa == 'y'){

        return main();

} else if (aa == 't')  {
    return 0;
}


}
