#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int num;
	
	printf("Insira um n�mero:\n");
	scanf("%d",&num);
	
	if(num%2 == 0){
		printf("%d � par",num);
	} else{
		printf("%d � �mpar",num);
	}
	
	return 0;
}
