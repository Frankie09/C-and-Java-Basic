#include <stdio.h>


int penjumlahan (int a,int b) {
    int hasil = a+b;
    return hasil;
}
int pengurangan (int a,int b) {
    int hasil =  a - b;
    return hasil;
}
int perkalian (int a,int b) {
    int hasil = a * b;
    return hasil;
}
int pembagian (int a,int b) {
    int hasil= a / b;
    return hasil;
}
int moduluss (int a,int b) {
    int hasil= a % b;
    return hasil;
}



int main()
{
    printf("hasilnya %i\n", penjumlahan(50,20));
    printf("hasilnya %i\n", pengurangan(50,20));
    printf("hasilnya %i\n", perkalian(50,20));
    printf("hasilnya %i", pembagian(50,20));
}
