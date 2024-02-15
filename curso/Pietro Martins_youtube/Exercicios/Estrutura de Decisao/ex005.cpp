#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num1,num2,num3,soma;
	
	printf("Digite 1 para somar\n");
	printf("Digite 2 para subtrair\n");
	printf("Digite 3 para multiplicar\n");
	printf("Digite 4 para dividir\n");
	scanf("%d",&num1);
	
	printf("Insira o primeiro valor:\n");
	scanf("%d",&num2);
	printf("Insira o segundo valor:\n");
	scanf("%d",&num3);
	
	switch(num1){
		case 1:
			soma = num2 + num3;
			printf("Soma:%d",soma);
			break;
		case 2:
			soma = num2 - num3;
			printf("Subtrair:%d",soma);
			break;
		case 3:
			soma = num2 * num3;
			printf("multiplicar:%d",soma);
			break;
		case 4:
			soma = num2 / num3;
			printf("dividir:%d",soma);
			break;
		default:
			printf("Valor digitado não é valido");
			break;			
	}
	
	return 0;
}
