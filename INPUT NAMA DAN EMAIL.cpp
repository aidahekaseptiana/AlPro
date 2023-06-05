#include<stdio.h>

int main(){
	char Nama;
	char AlamatEmail;
	
	printf("Menamppilkan Nama Dan Alamat Email");
	
	printf("\nMasukkan Nama Anda: ");
	scanf("%s",&Nama);
	printf("\nMasukkan Alamat Email Anda: ");
	scanf("%s",&AlamatEmail);
	
	
	printf("\nSelamat Datang %s",Nama); 
	printf("Email Anda adalah %s",AlamatEmail);

	return 0;
}
