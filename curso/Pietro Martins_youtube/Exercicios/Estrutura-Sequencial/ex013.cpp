#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num,quadr,cub;
	
	printf("Insira um numero:\n");
	scanf("%d",&num);
	
	quadr = pow(num, 2);
	cub = pow(num, 3);
	float rai = sqrt(num);
	float raic = pow(num,1.0/3.0);
	
	printf("O quadrado de %d é %d.\n",num,quadr);
	printf("O cubo de %d é %d.\n",num,cub);
	printf("A raiz quadrada %d é %f.\n",num,rai);
	printf("A raiz cúbica %d é %f.\n",num,raic);
}
