01
	#include<stdio.h>
02
	#include<stdlib.h>
03
	#include<string.h>
04
	#define clear_buffer while(getchar()!='\n');
05
	char* encrypt(char texte[],char cle[]){
06
	    char *encrypted;
07
	    int i=0;
08
	    while(texte[i]!='\0' && cle[i]!='\0'){
09
	    if (texte[i] >= 'A' && texte[i] <= 'Z')
10
	    encrypted[i] = ((texte[i] - 'A') ^ (cle[i] - 'A')) % 26 + 'A';
11
	else if (texte[i] >= 'a' && texte[i] <= 'z')
12
	    encrypted[i] = ((texte[i] - 'a') ^ (cle[i] - 'a')) % 26 + 'a';
13
	        i++;
14
	    }
15
	    encrypted[i+1]='\0';
16
	    return encrypted;
17

18
	    }
19
	char* decrypt(char encrypted[],char cle[]){
20
	    char *decrypted;
21
	    int i=0;
22

23
	    while(encrypted[i]!='\0' && cle[i]!='\0'){
24
	    if (encrypted[i] >= 'A' && encrypted[i] <= 'Z')
25
	    decrypted[i] = ((encrypted[i] - 'A') ^ (cle[i] - 'A')) % 26 + 'A';
26
	else if (encrypted[i] >= 'a' && encrypted[i] <= 'z')
27
	    decrypted[i] = ((encrypted[i] - 'a') ^ (cle[i] - 'a')) % 26 + 'a';
28
	        i++;
29
	    }
30
	    decrypted[i+1]=0;
31
	    return decrypted;
32

33
	}
34
	int main()
35
	{
36
	    char reponse,texte[100],cle[100],encrypted[100];
37
	    int i=0;
38

39
	    do{
40
	        printf("Voulez vous crypter ou decrypter un texte?(Ecrire C pour crypter et D pour decrypter)\n");
41
	        scanf("%c",&reponse);
42
	    }while (reponse!='C'&& reponse!='D'&& reponse!='c'&& reponse!='d');//controle pour obliger l'utilisateur à donner c ou d
43
	    if(reponse=='C'||reponse=='c'){
44
	            clear_buffer;//vider le buffer apres le scanf de la reponse
45

46
	        printf("Donner un texte a crypter\n");
47
	        fgets(texte,100,stdin);
48
	        while(texte[i]!=0)
49
	            i++;
50
	        if (i>0 && texte[i-1]!='\n')
51
	            clear_buffer;
52
	        printf("Donner une cle de meme taille\n");
53
	        fgets(cle,100,stdin);
54
	            ;
55
	        i=0;
56
	        while(cle[i]!=0)
57
	            i++;
58
	        if (i>0 && cle[i-1]!='\n')
59
	            clear_buffer;
60
	        printf("Le texte crypte est:%s\n",encrypt(texte,cle));
61
	    }else{
62
	            clear_buffer;//vider le buffer apres le scanf de la reponse
63

64
	        printf("Donner un texte (deja crypte) à decrypter\n");
65
	        fgets(encrypted,100,stdin);
66
	        i=0;
67
	        while(encrypted[i]!=0)
68
	            i++;
69
	        if (i>0 && encrypted[i-1]!='\n')
70
	            clear_buffer;
71
	        printf("Donner la cle (deja utilisee pour crypter\n");
72
	        fgets(cle,100,stdin);
73
	        i=0;
74
	        while(cle[i]!=0)
75
	            i++;
76
	        if (i>0 && cle[i-1]!='\n')
77
	            clear_buffer;
78

79
	        printf("Le texte decrypte est:%s\n",decrypt(encrypted,cle));
80
	    }
81
	    system("pause");
82
	    return 0;
83
	}
