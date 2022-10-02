#include <stdio.h>
#include <stdlib.h>


int penjumlahan(int a, int b);

int main() {
    InputAngka();
}

void InputAngka(int a, int b) {
    float angkapertama,angkakedua;
    printf("masukkan angka pertama = ");
        scanf("%f", &angkapertama);
    printf("masukkan angka kedua =");
        scanf("%f", &angkakedua);
    penjumlahan(angkapertama,angkakedua);
    return main();
}

int penjumlahan(int a, int b) {
    int hasil = a + b;
    printf("hasil Penjumlahan = %i\n",hasil);
    int kurang = a - b;
    printf("hasil pengurangan = %i\n",kurang);

}



