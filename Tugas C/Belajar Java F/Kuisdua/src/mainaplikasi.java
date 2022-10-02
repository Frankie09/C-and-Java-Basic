
import java.util.Scanner;

public class mainaplikasi {

    public static void main(String[] args) {
       
        bangundatar bd = new bangundatar();
        persegi kotak = new persegi();
        segitiga triangle = new segitiga();
        System.out.println("Selamat Datang di Program ");
        bd.luas();
        bd.keliling();
        System.out.println("Masukkan Pilihan bangun datar : 1.Persegi \n                                2.Segitiga");
        System.out.print("Pilihanmu : ");
        Scanner input = new Scanner(System.in);
        int pilihan = input.nextInt();

        if (pilihan == 1) {

            System.out.print("Masukkan sisi : ");
            kotak.sisi = input.nextFloat();
            kotak.luas();
            kotak.keliling();

        } else if (pilihan == 2) {
            System.out.print("Masukkan Alas : ");
            triangle.alas = input.nextFloat();
            System.out.print("Masukkan Tinggi : ");
            triangle.tinggi = input.nextFloat();

            triangle.luas();
        } else {
            
            System.out.println("Pililah yang benar");
        }

    }

}
