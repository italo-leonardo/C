#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float salario,perct, calculo, novo;
	
	printf("Insira o Sal�rio:\n");
	scanf("%f",&salario);
	
	printf("Insira o percentual de aumento:\n");
	scanf("%f",&perct);
	
	calculo = salario / (100/perct);
	
	novo = salario + calculo;
	
	printf("Valor do aumento:%.2f\n",calculo);
	printf("Novo Sal�rio:%.2f\n",novo);
}
