#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float num,num1,num2,raiz;
	
	printf("Menu de op��es:\n");
	printf("1 - Soma dois n�meros:\n");
	printf("2 - Raiz quadrada de um n�mero:\n");
	scanf("%f",&num);	
	
	if(num == 1){
		printf("Insira o primeiro n�mero:\n");
		scanf("%f",&num1);
		printf("Insira o segundo n�mero:\n");
		scanf("%f",&num2);
		printf("O resultado da soma:%f",num1 + num2);
	}
	if(num == 2){
		printf("Insira o n�mero:\n");
		scanf("%f",&raiz);
		printf("O resultado da raiz:%f",sqrt(raiz));
	}
	
	return 0;
}
