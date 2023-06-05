#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float Nilai;
	
	printf("Menampilkan hasil Konversi Nilai, Jika diketahui batasan Nilainya");
	
	printf("\nMasukkan Nilai yang ingin anda cek: ");
	scanf("%f",&Nilai);
	
	if (Nilai >= 40)
	{
		printf("\nSuhu yang anda masukkan adalah Dingin");
	}else if (Nilai >= 20 )
	{
		printf("\nSuhu yang anda masukkan adalah Normal");
	}else if (Nilai >= 0)
	{
		printf("\nSuhu yang anda masukkan adalah panas");
	}
	
	return 0;
}

