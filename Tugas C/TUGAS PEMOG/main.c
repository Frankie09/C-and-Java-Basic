#include <stdio.h>
#include <stdlib.h>




int main() {
    InputAngka();
}

void InputAngka(int a, int b) {
    int angkapertama,angkakedua;
    printf("masukkan angka pertama = ");
        scanf("%i", &angkapertama);
    printf("masukkan angka kedua =");
        scanf("%i", &angkakedua);
    printf("%i",penjumlahan(angkapertama,angkakedua));
    return main();
}

int penjumlahan(int a, int b) {
    int hasil = a + b;
    printf("hasil Penjumlahan = %i\n",hasil);
    int kurang = a - b;
    printf("hasil pengurangan = %i\n",kurang);
    return 0;
}



