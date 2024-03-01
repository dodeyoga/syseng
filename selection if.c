#include <stdio.h>

int main(){
	float nilai;
	printf("\033c");
	printf("Contoh Penggunaan Selection If\n");
	printf("------------------------------\n\n");
	printf("Masukkan nilai: ");
	scanf("%f", &nilai);
	printf("Nilai Anda: %.2f\n", nilai);
	if(nilai>=0 && nilai < 50){
		printf("Anda mendapatkan nilai E\n");
	}
	if(nilai>=50 && nilai < 60){
		printf("Anda mendapatkan nilai D\n");
	}
	if(nilai>= 60 && nilai < 70){
		printf("Anda mendapatkan nilai C\n");
	}
	if(nilai>= 70 && nilai < 80){
		printf("Anda mendapatkan nilai B\n");
	}
	if(nilai >= 80 && nilai <= 100){
		printf("Anda mendapatkan nilai A\n");
	}

	return 1;
}