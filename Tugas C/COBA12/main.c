      #include <stdio.h>
      #include <stdlib.h>
      #include <string.h>

 int i, brng, pmbyr, kmbl, k2, hrg[100], jmlh[100], tsh=0, ttlhrg[100],tshd;
       char nama[100][30], p[5];
       int main ()
     {
      printf("\t\t\t===========================================\n");
      printf("\t\t\t|                BBBBBBB                  |\n");
      printf("\t\t\t|                BBB       BB                |\n");
      printf("\t\t\t|                BBB       BB                |\n");
      printf("\t\t\t|                BBBBBBB                  |\n");
      printf("\t\t\t|                BBB       BB                |\n");
      printf("\t\t\t|                BBB      BB                |\n");
      printf("\t\t\t|                BBBBBBB                  |\n");
      printf("\t\t\t-------------------------------------------\n");
      printf("\t\t\t================= BERLIANA ================\n");
      printf("\t\t\t-------------------------------------------\n");
      printf("\t\t\t|           PROGRAM STRUK TOKO            |\n");
      printf("\t\t\t-------------------------------------------\n");

      awal://LABEL"awal"
      printf("\t\t\t Masukkan banyak barang: ");
      scanf("%i",&brng);
      for(i=1; i<=brng; i++)
     {
        printf("\t\t\t Masukkan nama barang ke-%i\t: ",i);
        scanf("%s", &nama[i]);
        printf("\t\t\t Masukkan harga per barang\t: Rp. ");
        scanf("%i",&hrg[i]);
        printf("\t\t\t Masukkan jumlah barang\t\t: ");
        scanf("%i", &jmlh[i]);
        printf("\n");
     }
     for(i=1; i<=brng; i++)
     {
        ttlhrg[i]=jmlh[i]*hrg[i];
        tsh=tsh+ttlhrg[i];
     }
      printf("\t\t\t Total harga keseluruhan\t: Rp. %i\n", tsh);
      printf("\t\t\t Masukkan jumlah pembayaran\t: Rp. ");
      scanf("%i", &pmbyr);
      kmbl=pmbyr-tsh;
      printf("\t\t\t=========================================\n");
      printf("\t\t\t Daftar belanja anda:\n");
     for(i=1; i<=brng; i++)
     {
       printf("\t\t\t%i. %i buah %s (@ Rp. %i)\t: Rp. %i\n", i, jmlh[i], nama[i], hrg[i], ttlhrg[i]);
     }
     if(pmbyr>=tsh)
     {
        printf("\t\t\t\tTotal harga\t\t: Rp. %i\n", tsh);
        printf("\t\t\t\tPembayaran\t\t: Rp. %i\n", pmbyr);
        printf("\t\t\t\tKembalian\t\t: Rp. %i\n", kmbl);
        printf ("\t\t\t|=================================|\n");
     printf ("\t\t\t|          Terimakasih            |\n");
     printf ("\t\t\t|       Telah berbelanja          |\n");
     printf ("\t\t\t|            Di Toko              |\n");
     printf ("\t\t\t|           SERBA ADA             |\n");
     }
     else
     {
        k2=-1*kmbl;
        printf("\t\t\tTotal harga\t: Rp. %i\n", tsh);
        printf("\t\t\tPembayaran\t: Rp. %i\n", pmbyr);
        printf("\t\t\tKekurangan\t: Rp. %i\n", k2);
     }
      printf("\t\t\t===================================\n");
      pilih://LABEL "pilih"
      printf("\nUlangi (y/t): ");
      scanf("%s", &p);
      if(strcmp(p,"y")==0||strcmp(p,"Y")==0)
     {
        goto awal;
     }
       else if(strcmp(p,"t")==0||strcmp(p,"T")==0)
     {
        printf("\t\t\t Anda akan keluar dari program ini...\n");
     }
      else
     {
      printf("\t\t\t Masukkan pilihan yang benar...\n");
        goto pilih;             }
      return 0;
     }
