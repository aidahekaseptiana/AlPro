

#include <stdio.h>
#include <math.h>
int main (){
	puts ("Operasi Perkalian Matriks");
	int baris, kolom, x, total = 0;
	int matriks1[10][10], matriks2[10][10], hasil[10][10];
	printf ("Input Bilangan Matriks 1: \n");
	for (baris = 0; baris<3; baris++){
		for (kolom = 0; kolom<3; kolom++){
			scanf ("%i", &matriks1[baris][kolom]);
			}
		}
		printf ("Input Bilangan Matriks 2: \n");
		for (baris = 0; baris<3; baris++){
			for (kolom = 0 ; kolom <3; kolom++){
				scanf ("%i", &matriks2[baris][kolom]);	
			}
		}
		printf ("Hasil dari Perkalian Matriks tersebut adalah: \n");
		for (baris= 0; baris<3; baris++){
			for (kolom = 0; kolom<3; kolom++){
				hasil[baris][kolom]=matriks1[baris][0]*matriks2[0][kolom]+matriks1[baris][1]*matriks2[1][kolom]+matriks1[baris][2]*matriks2[2][kolom];
				printf ("%i\t", hasil[baris][kolom]);	
			}printf("\n");
		}return 0;
}



