#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num1, num2,mult,subt,som;
	
	printf("Insira o primeiro número:\n");
	scanf("%d",&num1);
	printf("Insira o segundo número:\n");
	scanf("%d",&num2);
	
	if(num1 == num2){
		mult = num1 * num2;
		printf("Multiplicação:%d",mult);
	}if(num1 > num2){
		subt = num1 - num2;
		printf("Subtração:%d",subt); 
	}if(num1 < num2){
		som = num1 + num2;
		printf("Soma:%d",som);
	}
	
	return 0; 
}
