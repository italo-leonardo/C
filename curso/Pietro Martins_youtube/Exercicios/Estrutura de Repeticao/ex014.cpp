#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n,i,num,fat,j;
	
	printf("Quantos n�mero ser�o informados:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		printf("Insira o numero %d:\n",i);
		scanf("%d",&num);
		fat = 1;
		for(j=1;j<=num;j++){
			fat = fat * j;
		}
		printf("O fatorial de %d � %d.\n",num,fat);
	}
}
