#include<stdio.h>
int main()
{
	float JP;
	float Skala;
	float JS;
	
	printf ("Menghitung Jarak Sebenarnya dari Sebuah Skala");
	printf ("\nMasukkan Jarak Pada Peta: ");
	scanf ("%f",&JP);
	printf ("\nMasukkan Skala: ");
	scanf ("%f",&Skala);
	
	JS=JP/Skala;
	printf("Jarak Sebenarnya adalah: %f",JS);
}
