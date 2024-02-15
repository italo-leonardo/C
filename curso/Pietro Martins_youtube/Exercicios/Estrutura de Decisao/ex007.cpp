#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float num1,num2,num3,media, soma;
	
	printf("Insira a primeira nota:\n");
	scanf("%f",&num1);
	printf("Insira a segunda nota:\n");
	scanf("%f",&num2);
	printf("Insira a terceira nota:\n");
	scanf("%f",&num3);
	
	media = (num1*2)+(num2*3)+(num3*4);
	
	soma = media / 9;
	
	if(soma >= 8.0 && soma <= 10.0){
		printf("Sua nota é %.1f\n",soma);
		printf("Conceito A");
	} if(soma >= 7.0 && soma <= 8.0){
		printf("Sua nota é %.1f\n",soma);
		printf("Conceito B");
	} if(soma >= 6.0 && soma < 7){
		printf("Sua nota é %.1f\n",soma);
		printf("Conceito C");
	} if(soma >= 5.0 && soma < 6){
		printf("Sua nota é %.1f\n",soma);
		printf("Conceito D");
	} if(soma < 5){
		printf("Sua nota é %.1f\n",soma);
		printf("Conceito E");
	}
	
	return 0;
	
}
