#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float salario, desconto, novo;
	
	printf("Insira o sal�rio base:");
	scanf("%f",&salario);
	
	desconto = salario + 600 - salario * 0.10;
	
	//novo = salario - desconto + 600;
	
	printf("Sal�rio a receber:%.2f",desconto);
}
