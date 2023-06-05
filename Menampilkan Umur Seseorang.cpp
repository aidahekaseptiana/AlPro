#include<stdio.h>

int main(){
	
	int TanggalLahir, BulanLahir, TahunLahir;
	int TanggalHariIni, BulanIni, TahunIni;
	int UmurDalamTH, UmurDalamBl, UmurDalamHr;
	
	printf("Menghitung Umur Seseorang ");
	

	printf("\nMasukkan Tanggal Lahir Anda: ");
	scanf("%d",&TanggalLahir);
	printf("\nMasukkan Bulan Lahir Anda: ");
	scanf("%d",&BulanLahir);
	printf("\nMasukkan Tahun Lahir Anda: ");
	scanf("%d",&TahunLahir);
	printf("\nMasukkan Tanggal Berapa Hari ini: ");
	scanf("%d",&TanggalHariIni);
	printf("\nMasukkan Bulan Saat Ini: ");
	scanf("%d",&BulanIni);
	printf("\nMasukkan Tahun Saat ini: ");
	scanf("%d",&TahunIni);
	
	UmurDalamTH=TahunIni-TahunLahir;
	UmurDalamBl=BulanIni-BulanLahir;
	UmurDalamHr=TanggalHariIni-TanggalLahir;
	
	printf("Usia Anda Saat Ini Adalah : %d Tahun",UmurDalamTH);
	printf("%d Bulan",UmurDalamBl);
	printf("%d Hari",UmurDalamHr);

	
	return 0;
}
