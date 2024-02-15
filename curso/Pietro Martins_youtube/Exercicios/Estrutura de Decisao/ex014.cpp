#include <stdio.h>
#include <locale.h>

/*int main(){
	setlocale(LC_ALL,"Portuguese");
	int min_ini,hr_ini,min_fil,hr_fil,subi,subi_min,cal,cal_min;
	
	printf("Insira os dados do início:\n");
	printf("Horas:\n");
	scanf("%d",&hr_ini);
	printf("Minutos:\n");
	scanf("%d",&min_ini);
	printf("Insira os dados do fim:\n");
	printf("Horas:\n");
	scanf("%d",&hr_fil);
	printf("Minutos:\n");
	scanf("%d",&min_fil);
	
	subi = hr_fil - hr_ini;
	subi_min = min_fil - min_ini;
	
	if(subi_min < 0){
		cal = ((subi * 60) + subi_min)/ 60;
		cal_min = subi_min + 60;
		printf("Duração: %dhr e %dmin.",cal,cal_min);
	} 
	if(subi < 0){
		cal = (24 - hr_ini) + hr_fil;
		printf("Duração:%dhr e %dmin.",cal,subi_min);
	} 
	if(subi > 0 && subi_min > 0){
		printf("Duração: %dhr e %dmin.",subi,subi_min);
	}
		
}*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	int hr_ini, min_ini, hr_fim, min_fim, hora, minuto; 
	printf("Insira os dados do início:\n"); 
	printf("Horas: ");
	scanf("%d", &hr_ini); 
	printf("Minutos: "); 
	scanf("%d", &min_ini);
	printf("Insira os dados do fim:\n"); 
	printf("Horas: ");
	scanf("%d", &hr_fim); 
	printf("Minutos: "); 
	scanf("%d", &min_fim); 

	if(min_ini > min_fim){
		min_fim = min_fim + 60; 
		hr_fim = hr_fim - 1;
	}
	if(hr_ini > hr_fim){ 
		hr_fim = hr_fim + 24;
	}
	minuto = min_fim - min_ini; hora = hr_fim - hr_ini;
	printf("Duração %dhr e %dmin.\n", hora, minuto);
	
	return 0;
	}

