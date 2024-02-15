#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float valor, juros, rende, total;
	
	printf("Insira o valor do depósito:\n");
	scanf("%f",&valor);
	
	printf("Qual é a Taxa:\n");
	scanf("%f",&juros);
	
	rende = valor*(juros/100.0);
	
	total = rende + valor;
	
	printf("Rendimento:%.2f\n",rende);
	printf("Valor total:%.2f",total);
	 
}
