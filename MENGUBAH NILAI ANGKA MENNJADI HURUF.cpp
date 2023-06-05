#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float Nilai;
	char Nama;
	
	printf("Mengubah Nilai Angka Menjadi Nilai Huruf");
	
	printf("\nMasukkan Nama Anda: ");
	scanf("%s",&Nama);
	printf("\nMasukkan Nilai Anda: ");
	scanf("%f",&Nilai);
	
	if (Nilai>=90)
	{
		printf("\nNilai Anda Adalah A ");
		
	}else if (Nilai>=80)
	{
		printf("\nNilai Anda Adalah A- ");
		
	}else if (Nilai>=75)
	{
		printf("\nNilai Anda Adalah B+ ");
		
	}else if (Nilai>=70)
	{
		printf("\nNilai Anda Adalah B ");
		
	}else if (Nilai>=65)
	{
		printf("\nNilai Anda Adalah B- ");
		
	}else if (Nilai>=60)
	{
		printf("\nNilai Anda Adalah C+ ");
	
	}else if (Nilai>=56)
	{
		printf("\nNilai Anda Adalah C ");
		
	}else if (Nilai>=50)
	{
		printf("\nNilai Anda Adalah D ");
		
	}else if (Nilai<50)
	{
		printf("\nNilai Anda Adalah E ");
	}
	
	return 0;
}
