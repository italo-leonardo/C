#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num1,num2,i;
	
	printf("Insira o Valor de A:\n");
	scanf("%d",&num1);
	printf("Insira o Valor de B:\n");
	scanf("%d",&num2);
	
	for(i=num1;i<=num2;i++){
		if((i % 2) != 0){
			printf("È impar:%d\n",i);
		}
		
	}
	
}
