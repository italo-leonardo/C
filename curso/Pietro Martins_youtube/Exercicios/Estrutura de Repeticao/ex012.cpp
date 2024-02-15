#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num,i, cont;
	
	printf("Digite um número:\n");
	scanf("%d",&num);
	cont = 0;
	for(i=1;1<=num; i++){
		if((num % i) == 0){
			cont++;
		}
	}
	if(cont == 2){
		printf("%d e primo.\n",num);
	}
	else{
		printf("%d nao e primo.\n",num);
	}
	
	
}
