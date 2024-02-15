#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float salario, desconto, novo;
	
	printf("Insira o salário base:");
	scanf("%f",&salario);
	
	desconto = salario + 600 - salario * 0.10;
	
	//novo = salario - desconto + 600;
	
	printf("Salário a receber:%.2f",desconto);
}
