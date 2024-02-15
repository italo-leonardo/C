#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int base, altura, cal;
	
	printf("Digite a base:\n");
	scanf("%d",&base);
	printf("Digite a altura:\n");
	scanf("%d",&altura);
	
	cal = (base * altura)/2;
	
	printf("Sua Àrea é:%d",cal);
	
}
