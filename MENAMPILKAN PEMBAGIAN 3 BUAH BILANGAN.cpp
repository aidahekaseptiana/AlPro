#include<stdio.h>
int main()
{
	float bil1,bil2,bil3,Pembagian;
	
	printf ("Menghitung Pembagian 3 Buah Bilangan");
	printf ("\nMasukkan Bilangan Pertama: ");
	scanf ("%f",&bil1);
	printf ("\nMasukkan Bilangan Kedua: ");
	scanf ("%f",&bil2);
	printf ("\nMasukkan Bilangan Ketiga: ");
	scanf ("%f",&bil3);
	
	Pembagian=bil1/bil2/bil3;
	printf("Hasil dari Pembagian adalah: %2.f",Pembagian);
}
