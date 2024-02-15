#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int i,soma;
	soma = 0;
	
	for(i=1;i<=10;i++){
		soma = soma + i; 	
	}
	printf("Somatório:%d",soma);
}
