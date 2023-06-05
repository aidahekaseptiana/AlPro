#include <stdio.h>
 
int main()
{
   int baris, kolom, x, y, matrik1[10][10], matrik2[10][10], jumlah[10][10];
 
   printf("Input jumlah baris  dalam Matriks tersebut : "); scanf("%d", &baris);
   printf("Input jumlah kolom dalam Matriks tersebut : "); scanf("%d", &kolom);
   
   printf("\nMasukkan nilai matriks 1 :\n");
   for (x = 0; x < baris; x++){
      for (y = 0; y < kolom; y++){
     	printf("Input Matriks 1[%d][%d] :",x+1,y+1);
		scanf("%d",&matrik1[x][y]);
      }
   }
   
   printf("\n Matriks 1 : \n");
   for (x=0; x< baris; x++){
   	for (y=0; y<kolom; y++){
	   	printf("%3d", matrik1[x][y]);
	   }
	   printf("\n");
   }

 
   printf("\nMasukkan nilai matriks 2 :\n");
   for (x = 0; x < baris; x++){   	
      for (y = 0 ; y < kolom; y++){
	  	printf("Input Matriks 2[%d][%d]: ",x+1,y+1);
		scanf("%d",&matrik2[x][y]);
      }
   }
   
   printf("\n Matriks 2 : \n");
   for (x=0; x< baris; x++){
   	for (y=0; y<kolom; y++){
	   	printf("%3d", matrik2[x][y]);
	   }
	   printf("\n");
   }
    		   
   printf("\nHasil Penjumlahan Matrik M X N tersebut adalah:\n");
   for (x = 0; x < baris; x++) {
      for (y = 0 ; y < kolom; y++) {
         jumlah[x][y] = matrik1[x][y] + matrik2[x][y];
         printf("%d\t", jumlah[x][y]);
      }
      printf("\n");
   }
   printf("\n");

return 0;
}


