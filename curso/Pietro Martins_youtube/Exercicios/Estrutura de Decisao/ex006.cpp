#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num1,num2,op,perimetro,area;
	
	printf("Insira o primeiro valor:\n");
	scanf("%d",&num1);
	printf("Insira o segundo valor:\n");
	scanf("%d",&num2);
	
	printf("Op��es de processamento:\n");
	printf("Insira 0 para cancular o per�metro.\n");
	printf("Insira 1 para cancular o �rea.\n");
	scanf("%d",&op);
	
	if(op == 0){
		perimetro = 2 * (num1 + num2);
		printf("O per�mero:%d",perimetro);
	} if(op == 1){
		area = num1 * num2;
		printf("A �rea:%d",area);
	} if(op != 0 && op != 1){
		printf("Op��o inv�lida");
	}
	
	return 0;
}
