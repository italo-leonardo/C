#include <stdio.h>

int main(){
	int a,b,i,j;
	for(i=1;i<=5;i++){
		printf("Insira o valor de A:\n");
		scanf("%d",&a);
		printf("Insira o valor de B:\n");
		scanf("%d",&b);
		for(j=a;j<=b;j++){
			if((j%2) == 0){
			printf("%d e par.\n",j);
			}
		}
	}
}
