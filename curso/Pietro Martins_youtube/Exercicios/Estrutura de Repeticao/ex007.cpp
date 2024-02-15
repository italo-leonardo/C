#include <stdio.h>
#include <locale>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num,cont;
	cont = 0;
	 
	do{
		printf("Insira um número:\n");
		scanf("%d",&num);
		if(num > 0){
			cont++;
		}
	}while(num != 0);
	printf("Quantidade de positivos:%d\n", cont);
}
