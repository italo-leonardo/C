#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float num1, num2,poten;
	char nome;
	
	do{
		printf("Insira o primeiro número:\n");
		scanf("%f",&num1);
		fflush(stdin);
		printf("Insira o segundo número:\n");
		scanf("%f",&num2);
		fflush(stdin);
		
		printf("%f elevado a %f: %f\n\n",num1,num2,pow(num1,num2));
		
		printf("Deseja repetir a operação? (s/n)\n");
		scanf("%c",&nome);
		fflush(stdin);
		
	}while(nome == 's'|| nome == 'S');
}
