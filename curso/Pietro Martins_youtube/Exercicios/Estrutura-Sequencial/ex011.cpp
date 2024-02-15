#include <stdio.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"Portuguese");
	int seg,minu,hora;
	
	printf("Digite  quantos segundos:\n");
	scanf("%d",&seg);
	
	hora = seg / 3600;
	seg = seg % 3600;
	minu = seg / 60;
	seg = seg % 60;
	
	printf("Horas:%d\n",hora);
	printf("Minuto:%d\n",minu);
	printf("Segundos:%d\n",seg);
	
}
