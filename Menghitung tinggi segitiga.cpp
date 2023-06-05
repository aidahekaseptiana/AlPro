#include<stdio.h>

float TinggiSegitiga (float tinggi, float luas, float alas)
{
	tinggi =(2*luas)/alas;
	return tinggi;
}
int main()
{
	float tinggi, luas, alas;
	printf("Menghitung Tinggi Segitiga");
	printf("\nMasukkan Nilai Luas Segitiga: ");
	scanf("%f", &luas);
	printf("Masukkan Nilai Alas Segitiga: ");
	scanf("%f", &alas);
	printf ("Tinggi Segitiga Tersebut adalah: %.2f ",TinggiSegitiga (tinggi, luas, alas));
	
	return 0;
}

