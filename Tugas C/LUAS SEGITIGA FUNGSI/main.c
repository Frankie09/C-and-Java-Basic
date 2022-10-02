#include <stdio.h>
#include <stdlib.h>

int main()

{
    mainMenu();
}
void mainMenu() {

        int selectMenu;
        printf("---------------\n");
        printf("1. luas segitiga\n");
        printf("2. luas lingkaran\n");
        printf("3. copy karakter \n");
        printf("4. penjumlahan \n");
        printf("masukkan pilihan = ");
        scanf("%i", &selectMenu);
        if (selectMenu == 1) {
            luassegitiga();
        }else if (selectMenu == 2) {
            luaslingkaran ();
        }
        else if (selectMenu == 3) {
            copykarakter ();
        }else if ( selectMenu == 4){
                printf("%i", penjumlahan(10,40));
        }else {
                printf("Pilihan tidak ditemukan");
        }

return main();



}

int luassegitiga() {
    float alas,tinggi,luas;
    printf(" masukkan alas =");
    scanf("%f", &alas);
    printf("masukkan tinggi =");
    scanf("%f", &tinggi);

    luas = (alas * tinggi /2);
    printf("luas segitiga = %.2f", luas);


return main();
}

int luaslingkaran() {
    float l,r;
    printf(" masukkan jari jari lingkaran = ");
    scanf("%f", &r);
    float phi = 3.14;
    l = phi * (r * r);
    printf("luas lingkaran = %.2f", l);
    return main();


}
int copykarakter() {
    char a[100];
    printf("masukkan teks =");
    scanf("\n%[^\n]s", &a);
    printf("hasil copy = %s", a);
return main();

}

int penjumlahan (int a, int b) {
    int hasil = a + b;
    penjumlahan(hasil + b);

}
