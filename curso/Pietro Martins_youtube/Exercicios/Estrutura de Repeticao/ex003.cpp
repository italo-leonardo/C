#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n,i,fat;
	
	printf("Insira o Valor de N:\n");
	scanf("%d",&n);
	fat = 1;
	for(i=n;i>=1;i--){
		fat = fat * i;
		printf("%d",fat);		
	}
		
	
	
}
