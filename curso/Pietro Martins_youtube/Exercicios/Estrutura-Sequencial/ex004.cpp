#include <stdio.h>

int main(){
	float salario, aumento,novo;
	
	printf("Insira o salario:\n");
	scanf("%f",&salario);
	
	//aumento = salario / (100/25);
	
	novo = salario + salario*(25.0/100.0);
	
	printf("Seu novo Salario apos 25 porcento de aumento e %2.f",novo);
}
