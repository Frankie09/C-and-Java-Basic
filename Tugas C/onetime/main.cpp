#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define clear_buffer while(getchar()!='\n');
char* encrypt(char texte[],char cle[]){
	char *encrypted;
	int i=0;
	while(texte[i]!='\0' && cle[i]!='\0'){
	if (texte[i] >= 'A' && texte[i] <= 'Z')
    encrypted[i] = ((texte[i] - 'A') ^ (cle[i] - 'A')) % 26 + 'A';
else if (texte[i] >= 'a' && texte[i] <= 'z')
    encrypted[i] = ((texte[i] - 'a') ^ (cle[i] - 'a')) % 26 + 'a';
		i++;
	}
	encrypted[i+1]='\0';
	return encrypted;

	}
char* decrypt(char encrypted[],char cle[]){
	char *decrypted;
	int i=0;

	while(encrypted[i]!='\0' && cle[i]!='\0'){
	if (encrypted[i] >= 'A' && encrypted[i] <= 'Z')
    decrypted[i] = ((encrypted[i] - 'A') ^ (cle[i] - 'A')) % 26 + 'A';
else if (encrypted[i] >= 'a' && encrypted[i] <= 'z')
    decrypted[i] = ((encrypted[i] - 'a') ^ (cle[i] - 'a')) % 26 + 'a';
		i++;
	}
	decrypted[i+1]=0;
	return decrypted;

}
int main()
{
	char reponse,texte[100],cle[100],encrypted[100];
	int i=0;

	do{
		printf("Voulez vous crypter ou decrypter un texte?(Ecrire C pour crypter et D pour decrypter)\n");
		scanf("%c",&reponse);
	}while (reponse!='C'&& reponse!='D'&& reponse!='c'&& reponse!='d');//controle pour obliger l'utilisateur à donner c ou d
	if(reponse=='C'||reponse=='c'){
			clear_buffer;//vider le buffer apres le scanf de la reponse

		printf("Donner un texte a crypter\n");
		fgets(texte,100,stdin);
		while(texte[i]!=0)
			i++;
		if (i>0 && texte[i-1]!='\n')
			clear_buffer;
		printf("Donner une cle de meme taille\n");
		fgets(cle,100,stdin);
			;
		i=0;
		while(cle[i]!=0)
			i++;
		if (i>0 && cle[i-1]!='\n')
			clear_buffer;
		printf("Le texte crypte est:%s\n",encrypt(texte,cle));
	}else{
			clear_buffer;//vider le buffer apres le scanf de la reponse

		printf("Donner un texte (deja crypte) à decrypter\n");
		fgets(encrypted,100,stdin);
		i=0;
		while(encrypted[i]!=0)
			i++;
		if (i>0 && encrypted[i-1]!='\n')
			clear_buffer;
		printf("Donner la cle (deja utilisee pour crypter\n");
		fgets(cle,100,stdin);
		i=0;
		while(cle[i]!=0)
			i++;
		if (i>0 && cle[i-1]!='\n')
			clear_buffer;

		printf("Le texte decrypte est:%s\n",decrypt(encrypted,cle));
	}
	system("pause");
	return 0;
}
