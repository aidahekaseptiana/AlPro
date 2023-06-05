#include<stdio.h>

int main(){
	float jarak;
	float kecepatan;
	float waktu;
	
	printf("Menghitung Waktu yang akan ditempuh Menuju Tujuan");
	printf("\nMasukkan jarak yang akan ditempuh(KM): ");
	scanf("%f",&jarak);
	printf("\nMasukkan kecepatan anda(KM per Jam): ");
	scanf("%f",&kecepatan);
	
	waktu=jarak/kecepatan;
	
	printf("Waktu yang akan ditempuh menuju tujuan adalah (Jam): %2.f",waktu);
	
	return 0;
}
