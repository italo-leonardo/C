#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num1,num2,op,perimetro,area;
	
	printf("Insira o primeiro valor:\n");
	scanf("%d",&num1);
	printf("Insira o segundo valor:\n");
	scanf("%d",&num2);
	
	printf("Opções de processamento:\n");
	printf("Insira 0 para cancular o perímetro.\n");
	printf("Insira 1 para cancular o área.\n");
	scanf("%d",&op);
	
	if(op == 0){
		perimetro = 2 * (num1 + num2);
		printf("O perímero:%d",perimetro);
	} if(op == 1){
		area = num1 * num2;
		printf("A área:%d",area);
	} if(op != 0 && op != 1){
		printf("Opção inválida");
	}
	
	return 0;
}
