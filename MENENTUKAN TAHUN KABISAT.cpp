#include<stdio.h>

int main(){
	
	int tahun;
	
	printf("Menentukan Tahun Kabisat atau Bukan");
	
	printf("\nMasukkan Tahun: ");
	scanf ("%d",&tahun);
	

	if (tahun % 400 == 0)
	{
		printf("\nTahun Tersebut adalah Tahun Kabisat %d ",tahun);
		
	}else if (tahun % 100 == 0)
	{
		printf("Tahun Tersebut Tidak Termasuk Tahun Kabisat %d",tahun);
		
	}else if (tahun % 4 == 0)
	{
		printf ("Tahun Tersebut adalah Tahun Kabisat %d ",tahun);
		
	}else 
		printf ("Tahun  Tersebut Tidak Termasuk Tahun Kabisat %d",tahun);
		
	return 0;
}
