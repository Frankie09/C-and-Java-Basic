#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
int Penjumlahan(int a, int b);
int main() {
int a, b;
printf("Masukkan angka 1 = ");
scanf("%d", &a);
printf("Masukkan angka 2 = ");
scanf("%d", &b);
printf("a + b = %d", Penjumlahan(a,b));
return 0;
}
int Penjumlahan(int x, int y) {
return x+y;
}
