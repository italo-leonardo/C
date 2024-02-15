#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float salario, vale, imposto, recebe, desc;
	
	printf("Insira o salário base:\n");
	scanf("%f",&salario);
	
	vale = salario * 6.0/100.0;
	
	imposto = salario * 9.0/100.0;
	
	desc = vale + imposto;
	
	recebe = (salario - vale) - imposto;
	
	printf("Total de desconto:%.2f\n",desc);
	printf("Salário a receber:%.2f\n",recebe);
}
