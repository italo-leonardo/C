#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float valor, juros, rende, total;
	
	printf("Insira o valor do dep�sito:\n");
	scanf("%f",&valor);
	
	printf("Qual � a Taxa:\n");
	scanf("%f",&juros);
	
	rende = valor*(juros/100.0);
	
	total = rende + valor;
	
	printf("Rendimento:%.2f\n",rende);
	printf("Valor total:%.2f",total);
	 
}
