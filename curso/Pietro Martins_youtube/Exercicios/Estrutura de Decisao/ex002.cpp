#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num1, num2,num3;
	
	printf("Insira o primeiro n�mero:\n");
	scanf("%d",&num1);
	printf("Insira o segundo n�mero:\n");
	scanf("%d",&num2);
	printf("Insira o Terceiro n�mero:\n");
	scanf("%d",&num3);
	
	if(num1 > num2 && num1 > num3){
		printf("Condi��o satisfeita");
	}else{
		printf("Erro");
	}
	
	return 0;
}
