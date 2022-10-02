#include <stdio.h>
#include <stdlib.h>

int main()
{
   InputAngka ();
}
void InputAngka(int a, int b) {
    int angkapertama,angkakedua;
    printf("masukkan angka pertama = ");
        scanf("%d", &angkapertama);
    printf("masukkan angka kedua =");
        scanf("%d", &angkakedua);
    printf("%d",jumlahkurang(5,10));

}

int penjumlahan(int a, int b) {
    int hasil = a + b;
    return (hasil);

}
int pengurangan(int a,int b){
    int kurang = a - b;
    return (kurang);
}
