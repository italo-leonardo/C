#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int a,b,i;
	
	printf("Insira o primeiro numero:\n");
	scanf("%d",&a);
	printf("Insira o Segundo numero:\n");
	scanf("%d",&b);
	i = a +1;
	
	for(i;i<b;i++){
		printf("%d",i);
	}
	
}
