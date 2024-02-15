#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float num1, num2, resul;
	
	printf("Insira primeiro numero:\n");
	scanf("%f",&num1);
	printf("Insira segundo numero:\n");
	scanf("%f",&num2);
	
	resul = pow(num1,num2);
	
	printf("Resultado:%f",resul);
	
	
}
