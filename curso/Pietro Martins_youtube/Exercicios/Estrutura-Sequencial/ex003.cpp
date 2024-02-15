#include <stdio.h>

int main(){
	float not1,peso1,not2,peso2,not3,peso3,soma1,soma2,media;
	
	printf("Insira a primeira nota:\n");
	scanf("%f",&not1);
	printf("Insira o peso da primeira nota:\n");
	scanf("%f",&peso1);
	
	printf("Insira a segunda nota:\n");
	scanf("%f",&not2);
	printf("Insira o peso da segunda nota:\n");
	scanf("%f",&peso2);
	
	printf("Insira a terceira nota:\n");
	scanf("%f",&not3);
	printf("Insira o peso da terceira nota:\n");
	scanf("%f",&peso3);
	
	soma1 = (not1 * peso1) + (not2 * peso2) + (not3 * peso3);
	
	soma2 = peso1 + peso2 + peso3;
	
	media = soma1 / soma2;
	
	printf("Media ponderada:%f",media);
}
