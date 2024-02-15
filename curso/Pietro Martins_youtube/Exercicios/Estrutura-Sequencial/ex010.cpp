#include <stdio.h>
#include <locale.h>
#define P 3.14

int main(){
	setlocale(LC_ALL,"Portuguese");
	float raio,area;
	
	printf("Digite o raio:\n");
	scanf("%f",&raio);	
	
	area = P * (raio * raio);
	
	printf("Área do circulo:%f",area);
}
