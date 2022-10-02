#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

struct hotel{
    char PR[50];
    char BB[50];
    char CC[50];
    int i;
    int  LP;
    int  NK;
    struct hotel *next;
    }*head, *awal;
void login();
void depan();
void pembukaan();
void loginAll();
void tampil();
void gotoxy();
void load();
void keluar();
void setcolor(unsigned short color)
{
HANDLE hCon=GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hCon,color);
}

COORD kordinat={0,0};
void gotoxy(int x, int y)
{
    kordinat.X=x;
    kordinat.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),kordinat);
}
typedef struct history
{
    char act[100];
};

struct history log[100];
int tc_data, log_i = 0;

void sorting_NAMA()
    {
	char tmp[30];
	int temp;
    struct hotel *simpan1 = (struct hotel*)malloc(sizeof(struct hotel));
        simpan1 = head;
            if(strcmp(simpan1->PR,simpan1->next->PR)>=0) {
				strcpy(tmp,simpan1->PR);
				strcpy(simpan1->PR,simpan1->next->PR);
				strcpy(simpan1->next->PR,tmp);

				strcpy(tmp,simpan1->BB);
				strcpy(simpan1->BB,simpan1->next->BB);
				strcpy(simpan1->next->BB,tmp);

				strcpy(tmp,simpan1->CC);
				strcpy(simpan1->CC,simpan1->next->CC);
				strcpy(simpan1->next->CC,tmp);

				temp = simpan1->LP;
				simpan1->LP = simpan1->next->LP;
				simpan1->next->LP = temp;

				temp = simpan1->NK;
				simpan1->NK = simpan1->next->NK;
				simpan1->next->NK = temp;
			}
    }
int	sorting_TIPEKAMAR()
{
    struct hotel *simpan1 = (struct hotel*)malloc(sizeof(struct hotel));
    simpan1 = head;
	char tmp[30];
	int temp;
	if(strcmp(simpan1->BB,simpan1->next->BB)>=0)
	{
            strcpy(tmp,simpan1->PR);
            strcpy(simpan1->PR,simpan1->next->PR);
            strcpy(simpan1->next->PR,tmp);

            strcpy(tmp,simpan1->BB);
            strcpy(simpan1->BB,simpan1->next->BB);
            strcpy(simpan1->next->BB,tmp);

            strcpy(tmp,simpan1->CC);
            strcpy(simpan1->CC,simpan1->next->CC);
            strcpy(simpan1->next->CC,tmp);

            temp = simpan1->LP;
            simpan1->LP = simpan1->next->LP;
            simpan1->next->LP = temp;

            temp = simpan1->NK;
            simpan1->NK = simpan1->next->NK;
            simpan1->next->NK = temp;
    }
    return(0);
}

int	sorting_ALAMAT()
    {
    struct hotel *simpan1 = (struct hotel*)malloc(sizeof(struct hotel));
    simpan1 = head;
	char tmp[30];
	int temp;
    if(strcmp(simpan1->CC,simpan1->next->CC)>=0)
        {
            strcpy(tmp,simpan1->PR);
            strcpy(simpan1->PR,simpan1->next->PR);
            strcpy(simpan1->next->PR,tmp);

            strcpy(tmp,simpan1->BB);
            strcpy(simpan1->BB,simpan1->next->BB);
            strcpy(simpan1->next->BB,tmp);

            strcpy(tmp,simpan1->CC);
            strcpy(simpan1->CC,simpan1->next->CC);
            strcpy(simpan1->next->CC,tmp);

            temp = simpan1->LP;
            simpan1->LP = simpan1->next->LP;
            simpan1->next->LP = temp;

            temp = simpan1->NK;
            simpan1->NK = simpan1->next->NK;
            simpan1->next->NK = temp;
            }
	return(0);
    }

int	sorting_IDPEMESANAN()
    {
    struct hotel *simpan1 = (struct hotel*)malloc(sizeof(struct hotel));
    simpan1 = head;
	char tmp[30];
	int temp;
    if(simpan1->LP  > simpan1->next->LP)
        {
            strcpy(tmp,simpan1->PR);
            strcpy(simpan1->PR,simpan1->next->PR);
            strcpy(simpan1->next->PR,tmp);

            strcpy(tmp,simpan1->BB);
            strcpy(simpan1->BB,simpan1->next->BB);
            strcpy(simpan1->next->BB,tmp);

            strcpy(tmp,simpan1->CC);
            strcpy(simpan1->CC,simpan1->next->CC);
            strcpy(simpan1->next->CC,tmp);

            temp = simpan1->LP;
            simpan1->LP = simpan1->next->LP;
            simpan1->next->LP = temp;

            temp = simpan1->NK;
            simpan1->NK = simpan1->next->NK;
            simpan1->next->NK = temp;
            }
	return(0);
    }

int sorting_TELP()
    {
    struct hotel *simpan1 = (struct hotel*)malloc(sizeof(struct hotel));
    simpan1 = head;

	char tmp[30];
	int temp;
    if(simpan1->NK  >simpan1->next->NK)
        {
            strcpy(tmp,simpan1->PR);
            strcpy(simpan1->PR,simpan1->next->PR);
            strcpy(simpan1->next->PR,tmp);

            strcpy(tmp,simpan1->BB);
            strcpy(simpan1->BB,simpan1->next->BB);
            strcpy(simpan1->next->BB,tmp);

            strcpy(tmp,simpan1->CC);
            strcpy(simpan1->CC,simpan1->next->CC);
            strcpy(simpan1->next->CC,tmp);

            temp = simpan1->LP;
            simpan1->LP = simpan1->next->LP;
            simpan1->next->LP = temp;

            temp = simpan1->NK;
            simpan1->NK = simpan1->next->NK;
            simpan1->next->NK = temp;
        }
	return(0);
    }

void print_n_chars(int n, int c)
{
    while (n-- > 0) putchar(c);
}

void search()
{
    char search[70];
    struct hotel *history = (struct hotel*)malloc(sizeof(struct hotel));
    struct hotel *simpan = (struct hotel*)malloc(sizeof(struct hotel));
    simpan = head;
    gotoxy(52,1);
    printf("RENTAL MOTOR\n");
    gotoxy(30,3);
    printf("==============================================================\n");
    gotoxy(42,4);
    printf("MENCARI DATABASE RENTAL MOTOR\n");
    gotoxy(30,5);
    printf("==============================================================\n");
    gotoxy(30,7);
    printf("Database Yg Dicari [Nama] : ");
    fflush(stdin);
    gets(search);
    while(simpan!=NULL)
        {
            if(strcmp(search, simpan->PR)==0) {
                strcpy(history-> PR, simpan->PR);
                strcpy(history-> BB, simpan->BB);
                strcpy(history-> CC, simpan->CC);
                history-> LP = simpan->LP;
                history-> NK = simpan->NK;
                history->next=NULL;
        }
        simpan = simpan->next;
        }
        system("cls");
        if(awal==NULL)
            {
                awal=history;
            }
        while(history!=NULL)
            {
                gotoxy(52,1);
                printf("RENTAL MOTOR\n");
                gotoxy(30,3);
                printf("==============================================================\n");
                gotoxy(51,4);
                printf("DATA YANG DITEMUKAN\n");
                gotoxy(30,5);
                printf("==============================================================\n");
                gotoxy(30,6);
                printf("Merk Motor                  : %s \n",history-> PR);
                gotoxy(30,7);
                printf("Jenis Motor yang dipinjam   : %s \n",history-> BB);
                gotoxy(30,8);
                printf("Identitas Peminjam          : %s \n",history-> CC);
                gotoxy(30,9);
                printf("Lama Waktu Peminjaman Motor : %d \n",history-> LP);
                gotoxy(30,10);
                printf("Nomor plat Motor            : %d \n",history-> NK);
                printf("\n");
                history=history->next;
            }
            printf("\n\t\t\t\t\t   TEKAN APA SAJA UNTUK KEMBALI. . .");
            getch();
            tampil();
}

void historys(){

    gotoxy(52,1);
    printf("RENTAL MOTOR");
    gotoxy(30,2);
    printf("=============================================================\n");
    gotoxy(45,4);
    printf("RIWAYAT DATABASE RENTAL MOTOR");
    gotoxy(30,6);
    printf("=============================================================\n");
    for(int i = 0; i < log_i; i++)
    {
        gotoxy(40,17+i); printf("%d", i+1); gotoxy(45,17+i); printf("%s", log[i].act);
    }
    getch();
    }


void update_data() {
    struct hotel *current = NULL;
    char update[50],tipekamarbaru[50];
    char namabaru[50], alamatbaru[50];
    int idpemesananbaru, telpbaru;
    int pilih;
    printf("\t\t\t      ==============================================================\n");
    printf("\t\t\t      Data Yg Mau Diupdate [Nama] : ");
    fflush(stdin);
    gets(update);
    if(head==NULL) {
      printf("Data Tidak Tersedia");
      return;
   }
   current = head;
   while(head!=NULL) {
      if(strcmp(update, current->PR)==0) {
         while(pilih !=6){
         system("cls");
         gotoxy(52,1);
         printf("RENTAL MOTOR\n");
         gotoxy(30,3);
         printf("==============================================================\n");
         gotoxy(43,4);
         printf("MENGEDIT DATABASE RENTAL MOTOR\n");
         gotoxy(30,5);
         printf("==============================================================\n");
         gotoxy(30,6);
         printf("1. Nama\t\t3. Jenis Motor\t  5. Peminjaman(Hari)\n");
         gotoxy(30,7);
         printf("2. Alamat\t\t4. Plat Motor\n");
         gotoxy(30,9);
         printf("Pilihan Anda : ");
         scanf("%d", &pilih);
            if(pilih==1){
                fflush(stdin);
                gotoxy(30,11);
                printf("Nama Baru        : ");
                gets(namabaru);
                strcpy(current->PR, namabaru);
                gotoxy(30,12);
                printf("Data Telah Diubah!!!");
                gotoxy(49,14);
                printf("TEKAN APA SAJA UNTUK KEMBALI. . .");
                getch();
                tampil();
            }
            else if(pilih==2){
                fflush(stdin);
                gotoxy(30,11);
                printf("Alamat Baru      : ");
                gets(tipekamarbaru);
                strcpy(current->BB, tipekamarbaru);
                gotoxy(30,12);
                printf("Data Telah Diubah!!!");
                gotoxy(49,14);
                printf("TEKAN APA SAJA UNTUK KEMBALI. . .");
                getch();
                tampil();
            }
            else if(pilih==3){
                fflush(stdin);
                gotoxy(30,11);
                printf("Nama Motor Baru   : ");
                gets(alamatbaru);
                strcpy(current->CC, alamatbaru);
                gotoxy(30,12);
                printf("Data Telah Diubah!!!");
                gotoxy(49,14);
                printf("TEKAN APA SAJA UNTUK KEMBALI. . .");
                getch();
                tampil();
            }
            else if(pilih==4){
                gotoxy(30,11);
                printf("ID Baru          : ");
                scanf("%d",&idpemesananbaru);
                current->LP = idpemesananbaru;
                gotoxy(30,12);
                printf("Data Telah Diubah!!!");
                gotoxy(49,14);
                printf("TEKAN APA SAJA UNTUK KEMBALI. . .");
                getch();
                tampil();
            }
           else if(pilih==5){
                gotoxy(30,11);
                printf("Peminjaman(Hari) : ");
                scanf("%d", &telpbaru);
                current->NK = telpbaru;
                gotoxy(30,12);
                printf("Data Telah Diubah!!!");
                gotoxy(49,14);
                printf("TEKAN APA SAJA UNTUK KEMBALI. . .");
                getch();
                tampil();
            }
           else{
                gotoxy(30,11);
                printf("Pilihan Tidak Tersedia!!!");
                getch();
            break;
           }
      }
        break;
      }
    current = current->next;
}
}

void deleteItem(){
   char hapus[50];
   struct hotel *simpan, *previous;
   simpan = head;
   printf("\t\t\t      ==============================================================");
   printf("\n\t\t\t      Data Yg Ingin Dihapus [Nama] : ");
   fflush(stdin);
   gets(hapus);
   while(simpan->next != NULL)
   {
      if(strcmp(hapus, simpan->PR)==0)
      {
         break;
      }
      previous = simpan;
      simpan = simpan->next;
   }
   if ( simpan != NULL && (strcmp(hapus, simpan->PR)||(hapus, simpan->i)==0))
   {
      if ( simpan == head )
      {
         head = simpan->next;
      }
      else
      {
         previous->next = simpan->next;
      }

      free(simpan);
      printf("\t\t\t      Data Berhasil Dihapus\n", hapus);
      printf("\n\t\t\t\t\t  TEKAN APA SAJA UNTUK KEMBALI. . . ");
      getch();
      tampil();
   }
   else if(strcmp(hapus, simpan->PR)!=0)
    {
        printf("\nNo/Nama Yang Anda Masukan TIDAK ADA Dalam Database");
        printf("\n\nTEKAN APA SAJA UNTUK KEMBALI. . .");
        getch();
        deleteItem();
        }

    }

void insert(struct hotel** head, char varA[30],char varB[30], char varC[50], int VarD,int VarE){

    struct hotel *simpan = (struct hotel*)malloc(sizeof(struct hotel));
    struct hotel *last = *head;
    strcpy(simpan-> PR, varA);
    strcpy(simpan-> BB, varB);
    strcpy(simpan-> CC, varC);
    simpan-> LP = VarD;
    simpan-> NK = VarE;
    simpan->next = NULL;
    if (*head == NULL){
       *head = simpan;
       return;
    }
    while (last->next != NULL){
        last = last->next;}
    last->next = simpan;
    return;
    }

void print(struct hotel *node){
    int i=1;
    /*printf("No\tNama\t\t\tAlamat\t\t\t\tNama Buku\t\tID\t\tPeminjaman(Hari)\n");
    printf("No\t");
    printf("Nama\t\t\t");
    printf("Alamat\t\t\t");
    printf("Nama Buku\t\t\t");
    printf("ID\t\t");
    printf("Peminjaman(Hari)\n");*/
    while(node!=NULL){
       /* printf("%d\t",i);
        printf("%s\t\t\t", node->PR);
        printf("%s\t\t\t", node->BB);
        printf("%s\t\t\t", node->CC);
        printf("%d\t\t", node->LP);
        printf("%d\n", node->NK);
        /*printf("%d\t%s\t\t\t%s\t\t\t%s\t\t\t%d\t\t%d\n", i, node->PR, node->BB, node->CC, node->LP, node->NK);*/
        printf("\t\t\t      ");
        printf("No [%d]\n",i);
        printf("\t\t\t      ");
        printf("Nama Peminjaman        : %s \n",node-> PR);
        printf("\t\t\t      ");
        printf("Alamat Peminjam        : %s \n",node-> BB);
        printf("\t\t\t      ");
        printf("Nama Motor Yg Dipinjam : %s \n",node-> CC);
        printf("\t\t\t      ");
        printf("Plat Nomor             : %d \n",node-> LP);
        printf("\t\t\t      ");
        printf("Lama Peminjaman(Hari)  : %d \n",node-> NK);
        printf("\n");
        node=node->next;
        i++;
        }
    }


void main()
{
    loginAll();
    system("pause");
    return 0;
}

void pembukaan(){}
void loginAll(){
    int menu;
    int sm, salam1;
    int pilih;
    system("color 37");
    gotoxy(34,6);
    char salam[] = "SELAMAT DATANG DI PROGRAM DATABASE RENTAL MOTOR";


    for(sm = 0 ; sm< 1 ; sm++){
        printf(" ");
        Sleep(0);
    }

    for(salam1 = 0; salam[salam1]!=NULL; salam1++){
        printf("%c",salam[salam1]);
        Sleep(10);
    }

    for(sm = 0 ; sm < 1 ; sm++){
        printf(" ");
        Sleep(10);
    }
    login();
    return(0);
}

void login(){
    char uss[10]="admin";
    char pass[10]="admin";
    struct tm *Sys_T;
    time_t Tval;
    Tval = time(NULL);
    Sys_T = localtime(&Tval);

    gotoxy(30,8);
    printf("*===========================================================*\n\n");
    gotoxy(50,10);
    printf("SILAHKAN LOGIN DULU\n");
    gotoxy(30,12);
    printf("*===========================================================*\n");
    gotoxy(30,13);
    printf("|                                                           |\n");
    gotoxy(30,14);
    printf("|                                                           |\n");
    gotoxy(30,15);
    printf("|                                                           |\n");
    gotoxy(30,16);
    printf("|                                                           |\n");
    gotoxy(30,17);
    printf("|                                                           |\n");
    gotoxy(30,18);
    printf("*===========================================================*\n");
    gotoxy(30,19);
    printf ("Date & Time :                       %s", asctime (Sys_T));
    gotoxy(40,14);
    printf("Masukkan Username Anda (Admin) : ");
    scanf("%s", &uss);
    gotoxy(40,16);
    printf("Masukkan Password Anda (Admin) : ");
    scanf("%s", &pass);

    if (strcmp(uss,"admin")==0 && strcmp(pass,"admin")==0)
        {
            load();
            getch();
        }
    else
        {
            gotoxy(30,21);
            printf("Username dan Password SALAH! Silahkan Coba Lagi\n");
            login();
            getch();
        }
}

void load()
{
    int r, q;
    system("cls");
    system("color f0");
    gotoxy(45,11);
    printf("\t      Loading . . . .");
    gotoxy(50,13);
    for(r=1;r<=15;r++)
    {
        for(q=0; q<=9999999; q++);
            printf("%c",46);
    }
    tampil();
}


void tampil()
    {
    int p,pilihan;
    system("cls");
    int input;
    int LP,NK,n,i;
    char nama_p[50],jenis_k[50];
    char database[50],id_p[50];

    system("cls");
    system("color 02");
    gotoxy(30,5);
    printf("^--------------------------------------------------------------^\n");
    gotoxy(36,7);
    printf("SELAMAT DATANG DI PROGRAM DATABASE RENTAL MOTOR ");
    gotoxy(30,9);
    printf("^--------------------------------------------------------------^\n");
    gotoxy(30,10);
    printf("|                                                              |\n");
    gotoxy(30,11);
    printf("|   1. Membuat Database Rental Motor                           |\n");
    gotoxy(30,12);
    printf("|   2. Menampilkan Isi Database Rental Motor                   |\n");
    gotoxy(30,13);
    printf("|   3. Menambah Data Baru Ke Database Rental Motor             |\n");
    gotoxy(30,14);
    printf("|   4. Menghapus Data di Database Rental Motor                 |\n");
    gotoxy(30,15);
    printf("|   5. Mengedit Data di Database Rental Motor                  |\n");
    gotoxy(30,16);
    printf("|   6. Mencari Data di Database Rental Motor                   |\n");
    gotoxy(30,17);
    printf("|   7. Riwayat Aktivitas Rental Motor                          |\n");
    gotoxy(30,18);
    printf("|   8. Mengurutkan Data di Database Rental Motor              |\n");
    gotoxy(30,19);
    printf("|   9. Keluar Dari Program                                     |\n");
    gotoxy(30,20);
    printf("|                                                              |");
    gotoxy(30,21);
    printf("|                                                              |");
    gotoxy(30,22);
    printf("----------------------------------------------------------------");
    gotoxy(34,21);
    printf("Masukkan Pilihan Anda : ");
    scanf("%d", &pilihan);

    switch(pilihan){
    case 1:
    system("cls");
    system("color 97");
    gotoxy(52,1);
    printf("RENTAL MOTOR");
    gotoxy(30,2);
    printf("=============================================================\n");
    gotoxy(45,4);
    printf("MEMBUAT DATABASE RENTAL MOTOR");
    gotoxy(30,6);
    printf("=============================================================\n");
    gotoxy(30,9);
    printf("=============================================================\n");
    gotoxy(30,7);
    printf("|   Maks Data Yang Bisa Diinput    : 5 Data                 |\n");
    gotoxy(30,8);
    printf("|   Banyak Data Yang Ingin Diinput :                        |\n");
    gotoxy(67,8);
    scanf("%d",&n);
    printf("\n\n");
    for(i=1;i<=n;i++){
        if(n<=5){
        printf("\t\t\t      Data Peminjam Ke       : %d\n", i);
        fflush(stdin);
        printf("\t\t\t      Nama Peminjam          : ");
        gets(nama_p);
        printf("\t\t\t      Alamat Peminjam        : ");
        gets(jenis_k);
        printf("\t\t\t      Nama Motor Yg Dipinjam : ");
        gets(id_p);
        printf("\t\t\t      Plat Motor             : ");
        scanf("%d",&LP);
        printf("\t\t\t      Lama Peminjaman(Hari)  : ");
        scanf("%d",&NK);
        insert(&head,nama_p,jenis_k, id_p, LP,NK);
        printf("\n");
        }
        else{n=5;
        gotoxy(30,10);
        printf("Melebihi Batas Maks!!!\n");
        printf("\t\t\t      Data Peminjam Ke       : %d\n", i);
        fflush(stdin);
        printf("\t\t\t      Nama Peminjam          : ");
        gets(nama_p);
        printf("\t\t\t      Alamat Peminjam        : ");
        gets(jenis_k);
        printf("\t\t\t      Nama Motor Yg Dipinjam : ");
        gets(id_p);
        printf("\t\t\t      Plat Motor             : ");
        scanf("%d",&LP);
        printf("\t\t\t      Lama Peminjaman(Hari)  : ");
        scanf("%d",&NK);
        insert(&head,nama_p,jenis_k, id_p, LP,NK);
        printf("\n");

        }
    }
    printf("\t\t\t      =============================================================\n");
    printf("\t\t\t\t\t         Data Berhasil Disimpan !!\n");
    printf("\t\t\t      =============================================================\n");
    printf("\t\t\t\t\t         TEKAN APA SAJA UNTUK KEMBALI. . .");
    getch();
    tampil();
    break;

    case 2:
        system("cls");
        system("color 03");
        gotoxy(30,1);
        printf("==============================================================\n");
        gotoxy(47,2);
        printf("DATABASE RENTAL MOTOR\n");
        gotoxy(30,3);
        printf("==============================================================\n");
        print(head);
        printf("\n\t\t\t      ==============================================================");
        printf("\n\t\t\t\t\t       TEKAN APA SAJA UNTUK KEMBALI. . .");
        getch();
        tampil();
        break;
    case 3:
        system("cls");
        system("color 20");
        gotoxy(52,1);
        printf("RENTAL MOTOR\n");
        gotoxy(30,3);
        printf("=============================================================\n");
        gotoxy(43,4);
        printf("MENAMBAH DATABASE RENTAL MOTOR\n");
        gotoxy(30,5);
        printf("=============================================================\n");
        gotoxy(30,6);
        printf("|   Maks Data Yang Bisa Diinput    : 5 Data                 |\n");
        gotoxy(30,7);
        printf("|   Banyak Data Yang Ingin Diinput :                        |\n");
        gotoxy(30,8);
        printf("=============================================================\n");
        gotoxy(67,7);
        scanf("%d",&n);
        printf("\n\n");
        for(i=1;i<=n;i++){
        if(n<=5){
        printf("\t\t\t      Data Peminjam Ke       : %d\n", i);
        fflush(stdin);
        printf("\t\t\t      Nama Peminjam          : ");
        gets(nama_p);
        printf("\t\t\t      Alamat Peminjam        : ");
        gets(jenis_k);
        printf("\t\t\t      Nama Motor Yg Dipinjam : ");
        gets(id_p);
        printf("\t\t\t      Plat Motor             : ");
        scanf("%d",&LP);
        printf("\t\t\t      Lama Peminjaman(Hari)  : ");
        scanf("%d",&NK);
        insert(&head,nama_p,jenis_k, id_p, LP,NK);
        printf("\n");
        }
        else{n=5;
        gotoxy(30,10);
        printf("Melebihi Batas Maks!!!\n");
        printf("\t\t\t      Data Peminjam Ke       : %d\n", i);
        fflush(stdin);
        printf("\t\t\t      Nama Peminjam          : ");
        gets(nama_p);
        printf("\t\t\t      Alamat Peminjam        : ");
        gets(jenis_k);
        printf("\t\t\t      Nama Motor Yg Dipinjam : ");
        gets(id_p);
        printf("\t\t\t      Plat Motor             : ");
        scanf("%d",&LP);
        printf("\t\t\t      Lama Peminjaman(Hari)  : ");
        scanf("%d",&NK);
        insert(&head,nama_p,jenis_k, id_p, LP,NK);
        printf("\n");

        }
    }
        printf("\t\t\t      =============================================================\n");
        printf("\t\t\t\t\t         Data Berhasil Disimpan !!\n");
        printf("\t\t\t      =============================================================\n");
        printf("\t\t\t\t\t         TEKAN APA SAJA UNTUK KEMBALI. . .");
        getch();
        tampil();
        break;

    case 4:
        system("cls");
        system("color 56");
        gotoxy(52,1);
        printf("RENTAL MOTOR\n");
        gotoxy(30,3);
        printf("==============================================================\n");
        gotoxy(42,4);
        printf("MENGHAPUS DATABASE RENTAL MOTOR\n");
        gotoxy(30,5);
        printf("==============================================================\n");
        print(head);
        deleteItem();
        printf("\t\t\t\t\t         TEKAN APA SAJA UNTUK KEMBALI. . .");
        getch();
        tampil();
        break;

    case 5:
        system("cls");
        system("color F4");
        gotoxy(52,1);
        printf("RENTAL MOTOR\n");
        gotoxy(30,3);
        printf("==============================================================\n");
        gotoxy(42,4);
        printf("MENGEDIT DATABASE RENTAL MOTOR\n");
        gotoxy(30,5);
        printf("==============================================================\n");
        print(head);
        update_data();
        break;
    case 6:
        system("cls");
        system("color F8");
        search();
        break;
    case 7:
        system("cls");
        system("color F2");
        historys();
        printf("\t\t\t\t\t         TEKAN APA SAJA UNTUK KEMBALI. . .");
        getch();
        tampil();
        break;
    case 8:
        system("cls");
        system("color F3");
        do{
        gotoxy(52,1);
        printf("RENTAL MOTOR\n");
        gotoxy(30,3);
        printf("==============================================================\n");
        gotoxy(42,4);
        printf("MENGURUTKAN PADA DATABASE RENTAL MOTOR\n");
        gotoxy(30,5);
        printf("==============================================================\n");
        gotoxy(30,6);
        printf("1. Nama Peminjam \n");
        gotoxy(30,7);
        printf("2. Alamat Peminjam\n");
        gotoxy(30,8);
        printf("3. Nama Motor Yg Dipinjam\n");
        gotoxy(30,9);
        printf("4. Plat Motor\n");
        gotoxy(30,10);
        printf("5. Lama Peminjaman(Hari)\n");
        gotoxy(30,11);
        printf("Masukkan Pilihan Anda : ");
        scanf("%d", &pilihan);
        printf("\n");
        if(pilihan==1){
            sorting_NAMA();
            print(head);
            printf("\t\t\t\t\t         TEKAN APA SAJA UNTUK KEMBALI. . .");
            getch();
            system("cls");
        }else if(pilihan==2){
            sorting_TIPEKAMAR();
            print(head);
            printf("\t\t\t\t\t         TEKAN APA SAJA UNTUK KEMBALI. . .");
            getch();
            system("cls");
        }else if(pilihan==3){
            sorting_ALAMAT();
            print(head);
            printf("\t\t\t\t\t         TEKAN APA SAJA UNTUK KEMBALI. . .");
            getch();
            system("cls");
        }else if(pilihan==4){
            sorting_IDPEMESANAN();
            print(head);
            printf("\t\t\t\t\t         TEKAN APA SAJA UNTUK KEMBALI. . .");
            getch();
            system("cls");
        }else if(pilihan==5){
            sorting_TELP();
            print(head);
            printf("\t\t\t\t\t         TEKAN APA SAJA UNTUK KEMBALI. . .");
            getch();
            system("cls");
        }else{
            printf("Pilihan Tidak Tersedia");
            tampil();
            break;
        }
        }
        while(pilihan!=6);
        tampil();
        break;

    case 9:
        keluar();
  default:
        system("cls");
        gotoxy(50,2);
        printf("Pilihan Tidak Tersedia!");
        gotoxy(45,3);
        printf("TEKAN APA SAJA UNTUK KEMBALI. . .");
    break;
    }
    getch();
    system("cls");
    tampil();
}

void keluar(){
    char kata[]="THANK YOU",kata1[20],kata2[20];
    int i,j,k,l;
    system("cls");
    gotoxy(24,11);

    strcpy(kata1,kata);
    strcpy(kata2,kata);
    for(i=0;i<=strlen(kata)-1;i++)
        {
            if(i%2==1)
            {
                kata1[i]=' ';
            }else
            {
                kata2[i]=' ';
            }
            printf("%s",kata);
            printf("%s",kata1);
            printf("%s",kata2);
        }
        for( i=1;i<=12;i++)
            {
                for(i=1,j=15-strlen(kata),k=59+strlen(kata),l=11;i<=11;i++,j+=2,k-=2,l--)
                {
                    system("cls");
                    setcolor(10);

                    gotoxy(37-1/2*strlen(kata),12);printf("%s",kata);
                    gotoxy(j,i);printf("%s",kata1);
                    gotoxy(37-1/2*strlen(kata),l);printf("%s",kata1);
                    gotoxy(k,i);printf("%s",kata2);
                    gotoxy((37-1/2*strlen(kata))-j,12);printf("%s",kata1);
                    gotoxy(j,l+12);printf("%s",kata1);
                    gotoxy(37-1/2*strlen(kata),i+12);printf("%s",kata2);
                    gotoxy(k,l+12);printf("%s",kata2);
                    gotoxy((37-1/2*strlen(kata))+j,12);printf("%s",kata2);
                }

                for(i=11,j=35-strlen(kata),k=39+strlen(kata),l=1;i>=1;i--,j-=2,k+=2,l++)
                {
                    system("cls");
                    setcolor(11);

                    gotoxy(37-1/2*strlen(kata),12);printf("%s",kata);
                    gotoxy(j,i);printf("%s",kata2);
                    gotoxy(37-1/2*strlen(kata),l);printf("%s",kata2);
                    gotoxy(k,i);printf("%s",kata1);
                    gotoxy(37-1/2*strlen(kata)-j,12);printf("%s",kata2);
                    gotoxy(j,l+12);printf("%s",kata2);
                    gotoxy(37-1/2*strlen(kata),i+12);printf("%s",kata1);
                    gotoxy(k,l+12);printf("%s",kata1);
                    gotoxy((37-1/2*strlen(kata))+j,12);printf("%s",kata1);
                    gotoxy(37-1/2*strlen(kata),12);printf("%s",kata);
                    gotoxy(j,i);printf("%s",kata1);
                    gotoxy(37-1/2*strlen(kata),l);printf("%s",kata1);
                    gotoxy(k,i);printf("%s",kata2);
                    gotoxy((37-1/2*strlen(kata))-j,12);printf("%s",kata1);
                    gotoxy(j,l+12);printf("%s",kata1);

                    gotoxy(37-1/2*strlen(kata),i+12);printf("%s",kata2);
                    gotoxy(k,l+12);printf("%s",kata2);
                    gotoxy((37-1/2*strlen(kata))+j,12);printf("%s",kata2);
                    }

                for(i=1,j=15-strlen(kata),k=59+strlen(kata),l=11;i<=11;i++,j+=2,k-=2,l--)
                {
                    system("cls");
                    setcolor(13);

                    gotoxy(37-1/2*strlen(kata),12);printf("%s",kata);
                    gotoxy(j,i);printf("%s",kata1);
                    gotoxy(37-1/2*strlen(kata),l);printf("%s",kata1);
                    gotoxy(k,i);printf("%s",kata2);
                    gotoxy((37-1/2*strlen(kata))-j,12);printf("%s",kata1);
                    gotoxy(j,l+12);printf("%s",kata1);
                    gotoxy(37-1/2*strlen(kata),i+12);printf("%s",kata2);
                    gotoxy(k,l+12);printf("%s",kata2);
                    gotoxy((37-1/2*strlen(kata))+j,12);printf("%s",kata2);
                    gotoxy(37-1/2*strlen(kata),12);printf("%s",kata);
                    gotoxy(j,i);printf("%s",kata2);
                    gotoxy(37-1/2*strlen(kata),l);printf("%s",kata2);
                    gotoxy(k,i);printf("%s",kata1);
                    gotoxy(37-1/2*strlen(kata)-j,12);printf("%s",kata2);
                    gotoxy(j,l+12);printf("%s",kata2);
                    gotoxy(37-1/2*strlen(kata),i+12);printf("%s",kata1);
                    gotoxy(k,l+12);printf("%s",kata1);
                    gotoxy((37-1/2*strlen(kata))+j,12);printf("%s",kata1);
                    for(i=1;i<=22666666;i++);
                }

                for(i=11,j=35-strlen(kata),k=39+strlen(kata),l=1;i>=1;i--,j-=2,k+=2,l++)
                {
                    system("cls");
                    setcolor(14);

                    gotoxy(37-1/2*strlen(kata),12);printf("%s",kata);
                    gotoxy(j,i);printf("%s",kata2);
                    gotoxy(37-1/2*strlen(kata),l);printf("%s",kata2);
                    gotoxy(k,i);printf("%s",kata1);
                    gotoxy(37-1/2*strlen(kata)-j,12);printf("%s",kata2);
                    gotoxy(j,l+12);printf("%s",kata2);
                    gotoxy(37-1/2*strlen(kata),i+12);printf("%s",kata1);
                    gotoxy(k,l+12);printf("%s",kata1);
                    gotoxy((37-1/2*strlen(kata))+j,12);printf("%s",kata1);
                }
    system("cls");
    exit(0);
    }

}

