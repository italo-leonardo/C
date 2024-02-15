#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float num1,num2,num3,media;
	
	printf("Insira a primeira nota:\n");
	scanf("%f",&num1);
	printf("Insira a segunda nota:\n");
	scanf("%f",&num2);
	printf("Insira a terceira nota:\n");
	scanf("%f",&num3);
	
	media = (num1 + num2 + num3)/3;
	
	if(media < 3.0){
		printf("Média:%.1f\n",media);
		printf("Reprovado!");
	} if(media >= 3.0 && media < 7.0){
		printf("Média:%.1f\n",media);
		printf("Exame!");
	}  if(media >= 7.0){
		printf("Média:%.1f\n",media);
		printf("Aprovado! Parabéns.");
	}
	
	return 0;
}
