#include<stdio.h>

int main(){
	float volume;
	float debit;
	float waktu;
	
	printf("Menghitung Waktu yang diperlukan untuk Mengisi Kolam");
	printf("\nMasukkan Volume Kolam yang akan diisi (Liter): ");
	scanf("%f",&volume);
	printf("\nMasukkan debit air (Liter per detik): ");
	scanf("%f",&debit);
	
	waktu=volume/debit;
	
	printf("Waktu yang diperlukan Untuk Mengisi Sebuah Kolam adalah : %2.f jam",waktu);
	
	return 0;
}
