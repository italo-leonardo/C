#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num,pole,jar,mil;
	
	printf("Insira a medida em pés:\n");
	scanf("%d",&num);
	
	pole = num * 12;
	jar = num / 3;
	mil = jar / 1760;
	
	printf("Polegadas:%d\n",pole);
	printf("Jardas:%d\n",jar);
	printf("milha:%d\n",mil);
}
