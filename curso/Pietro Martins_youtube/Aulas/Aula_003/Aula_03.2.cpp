#include <stdio.h>

int main(){
	int A , B, soma, subtr, mult, divis;
	
	printf("Digite o primeiro numero:\n");
	scanf("%d", &A );
	printf("Digite o segundo numero:\n");
	scanf("%d", &B);
	
	soma = A+B;
	subtr = A-B;
	mult = A*B;
	divis = A/B;
	
	printf("REsultados:\n");
	printf("Soma: %d.\n", soma);
	printf("Suntra:%d.\n",subtr);
	printf("Multiplic:%d.\n",mult);
	printf("Divisao:%d.\n",divis);	
}
