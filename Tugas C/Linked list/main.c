#include <stdio.h>
#include <stdlib.h>
int main()
{
struct tnode
{
int x;
struct tnode *next;
};


struct tnode *head=NULL,*curr=NULL, *node=NULL;
int i,a,c;
printf("Masukkan banyak data : ");
scanf("%d",&a);
for (i=0; i<a; i++)
{
printf("Masukkan data ke-%d : ",i+1);
scanf("%d",&c);
node = (struct tnode *)malloc (sizeof(struct tnode));
node -> x = c;

if (head == NULL)
{
head = node;
curr = node;
}
else
{
curr -> next = node;
curr = node;
}
}

curr -> next = NULL;
curr = head;


while (curr != NULL)
{
printf("%d ", curr -> x);
curr = curr -> next;
}
printf("\n");
return 0;
}
