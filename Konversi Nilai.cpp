#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float Nilai;
	
	printf("Menampilkan Hasil Konversi, Jika diketahui batasan Nilai");
	
	printf("\nMasukkan Nilai Suhu yang ingin di cek: ");
	scanf("%f",&Nilai);

	if (Nilai >=40 )
	{
		printf("\nSuhu Yang Anda Masukkan Dingin ");
		
	}else if (Nilai >=20)
	{
		printf("\nSuhu Yang Anda Masukkan Normal ");
		
	}else if (Nilai >=0)
	{
		printf("\nSuhu Yang Anda Masukkan Panas ");
	}
	
	return 0;
}
