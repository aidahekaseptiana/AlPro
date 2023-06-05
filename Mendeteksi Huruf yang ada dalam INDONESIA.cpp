#include <stdio.h>

int main(){
	int i,x,array[9]={'i','n','d','o','n','e','s','i','a'};
	
	for(i=0;i<9;i++){
		printf("%c",array[i]);
	}
	printf("\n\nMasukkan huruf yang akan dicari: ");
	scanf("%c",&x);
	
	if(x==array[0]||x==array[1]||x==array[2]||x==array[3]||x==array[4]||x==array[5]||x==array[6]||x==array[7]||x==array[8]||x==array[9]){
		printf("Huruf Tersebut ada");
	}else{
	printf("Maaf, huruf yang anda cari tidak ada");
	}
}

