#include<stdio.h>
#include<stdlib.h>

int main(){
	
	char Nama;
	int NIM;
	int Nilai;
	
	printf("Menentukan Apakah Anda Lulus atau Tidak");
	
	printf("\nMasukkan Nama Anda: ");
	scanf("%s",&Nama);
	printf("\nMasukkan Nomer Induk Mahasiswa Anda: ");
	scanf("%d",&NIM);
	printf("\nMasukkan Nilai Anda: ");
	scanf("%d",&Nilai);
	
	printf("\nNama: %s", &Nama);
	
	if (Nilai>=70)
	{
		printf("\nSelamat Anda Lulus  ");
		
	}else if (Nilai<70)
	{
		printf("\nMohon Maaf, Anda Gagal. Silahkan Coba Lagi dan Tetap Semangat ");
	}
	
	return 0;
}
