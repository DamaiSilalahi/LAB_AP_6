#include<stdio.h>

int main()
{
    char nama[50];
    int nim;
    char kom;
    float ip;

    system("CLS");
 printf("Hello world\n");
 
 printf("Masukkan nama: ");
 //scanf("%s",&nama);
 gets(nama); //gets: get string
 
 printf("Masukkan nim: ");
 scanf("%d",&nim);
 
 printf("Masukkan kom: ");
 scanf(" %c",&kom);
 
 printf("Masukkan IP: ");
 scanf("%f",&ip);
 
// printf("Nama : %s\n",nama);
printf("Nama: ");
puts(nama); //puts string
 printf("NIM : %d\n",nim);
 printf("KOM : %c\n",kom);
 printf("IP: %.2f\n",ip);
 
}