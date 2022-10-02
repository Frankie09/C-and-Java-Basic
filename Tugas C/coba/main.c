#include <stdio.h>
#include <stdlib.h>

int main()
{
 char huruf[255];
int y;
 printf("masukkan huruf : ");
 gets(huruf);
 printf("jumlah geser :");
scanf("%d",&y);

 for(int i=0; i<strlen(huruf);i++)
 {
  if (huruf[i]>='a' && huruf[i]<='z')
   printf("%c", huruf[i]-32+y);
    else if (huruf[i]==' ')
        printf("=");
  else
   printf("%c", huruf[i]+y);
 }
 return 0;
}
