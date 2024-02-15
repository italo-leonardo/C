#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float salario, grate, imposto, recebe;
	
	printf("Insira o salário base:\n");
	scanf("%f",&salario);
	
	grate = salario * 5.0/100.0;
	
	imposto = salario * 7.0/100.0;
	
	recebe = (salario + grate) - imposto;
	
	printf("Salário a receber:%.2f\n",recebe);
}
