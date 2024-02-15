#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num1, num2;
	
	printf("Insira o primeiro número:\n");
	scanf("%d",&num1);
	printf("Insira o segundo número:\n");
	scanf("%d",&num2);
	
	if(num1 > num2){
		printf("O maior é :%d",num1);
	}if(num2 > num1){
		printf("O maior é:%d", num2);
	}if(num1 == num2){
		printf("Os números são iguais");
	}
	
	return 0;
}

