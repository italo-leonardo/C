#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float sal,sal_novo,porc;
	int i,ano_atual;
	
	printf("Digite a data atual:\n");
	scanf("%d",&ano_atual);
	
	sal = 1000.0;
	porc = 1.5/100.0;
	sal_novo = sal + sal*porc;
	
	for(i=2017;i<=ano_atual;i++){
		porc = 2 * porc;
		sal_novo = sal_novo + sal_novo*porc;
	}
	
	printf("A salário atual é %f",sal_novo);
	
	
	
}
