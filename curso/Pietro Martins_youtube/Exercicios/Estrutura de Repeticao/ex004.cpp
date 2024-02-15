#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n,i,mult;
	
	printf("Inrira N:\n");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++){
		mult = n * i;
		printf("%d x %d = %d\n",n,i,mult);
	}
}
