#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num;
	
	printf("Insira um número:\n");
	scanf("%d",&num);
	
	if(num%2 == 0){
		printf("%d é par",num);
	} else{
		printf("%d é ímpar",num);
	}
	
	return 0;
}
