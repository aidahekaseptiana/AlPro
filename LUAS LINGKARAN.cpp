#include<stdio.h>

int main(){
	float luas;
	float phi;
	int r;
	
	printf("Menghitung Luas Lingkaran");
	printf("\nMasukkan nilai phi: ");
	scanf("%f",&phi);
	printf("\nMasukkan Jari - Jari Lingkaran Tersebut: ");
	scanf("%d",&r);
	
	luas=phi*r*r;
	
	printf("Luas Lingkaran Tersebut adalah %2.f",luas);
	
	return 0;
}
