#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num1, num2;
	
	printf("Insira o primeiro n�mero:\n");
	scanf("%d",&num1);
	printf("Insira o segundo n�mero:\n");
	scanf("%d",&num2);
	
	if(num1 > num2){
		printf("O maior � :%d",num1);
	}if(num2 > num1){
		printf("O maior �:%d", num2);
	}if(num1 == num2){
		printf("Os n�meros s�o iguais");
	}
	
	return 0;
}

