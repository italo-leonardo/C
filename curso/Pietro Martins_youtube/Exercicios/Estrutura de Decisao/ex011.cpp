#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float a,b,c,trian,x1,x2;
	
	printf("Insira o coeficiente a:\n");
	scanf("%f",&a);
	printf("Insira o coeficiente b:\n");
	scanf("%f",&b);
	printf("Insira o coeficiente c:\n");
	scanf("%f",&c);
	if(a < 0 || b < 0 || c < 0){		
		trian = (pow(b,2)) - (4*a*c);
		x1 = (-b + sqrt(trian)) / (2*a);
		x2 = (-b - sqrt(trian)) / (2*a);
		
		printf("%f\n",trian);
		printf("Raiz x1:%f\n",x1);
		printf("Raiz x2:%f\n",x2);
	} else{
		printf("Raízes fora do domínio dos números reais");
	}
	
	return 0;
}
