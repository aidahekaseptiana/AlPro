#include<stdio.h>

int main(){
	int BanyakDinding;
	float L;
	float T;
	float Luas;
	float LJ;
	float BanyakBatuBata;
	
	printf("\nMenghitung Kebutuhan Batu Bata Merah Untuk Membangun Sebuah Ruangan");
	printf("\nMasukkan Banyak Dinding Untuk Membangun Ruangan Tersebut: ");
	scanf("%d",&BanyakDinding);
	printf("\nMasukkan Lebar Pada Dinding (M): ");
	scanf("%f",&L);
	printf("\nMasukkan Tinggi Pada Dinding (M): ");
	scanf("%f",&T);
	printf("\nMasukkan Luas Jendela Jika ada (M), Jika Tidak Ada Tulis 0: ");
	scanf("%f",&LJ);
	
	
	Luas=L*T*BanyakDinding-LJ;
	BanyakBatuBata=Luas*70;
	
	printf("Banyak Kebutuhan Batu Bata Merah Untuk Membangun Ruangan Tersebut Adalah %f",BanyakBatuBata);
	
	return 0;
}
