#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num1,num2,num3,num4;
	
	printf("Insira o primeiro numero:\n");
	scanf("%d",&num1);
	printf("Insira o segundo numero:\n");
	scanf("%d",&num2);
	printf("Insira o Terceito numero:\n");
	scanf("%d",&num3);
	printf("Insira o quarto numero:\n");
	scanf("%d",&num4);
	
	if((num4<num1) && (num4<num2) && (num4<num3)){
		if(num4 < num1){
			printf("%d - %d - %d - %d\n",num3,num2,num1,num4);
		} 
	} if((num4>num1) && (num4<num2) && (num4<num3)){
			printf("%d - %d - %d - %d\n",num3,num2,num4,num1);
		} if((num4>num2) && (num4>num1) && (num4<num3)){
			printf("%d - %d - %d - %d\n",num3,num4,num2,num1);
		} if((num4>num1) && (num4>num2) && (num4>num3)){
			printf("%d - %d - %d - %d\n",num4,num3,num2,num1);
		} 
}
