#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int sac, cem,cenq,vint,dez,sinc,dois;
	
	printf("Insira o valor a sacar:\n");
	scanf("%d",&sac);
	
	cem = sac / 100;
	sac = sac % 100;
	cenq = sac / 50;
	sac = sac % 50;
	vint = sac/20;
	sac = sac % 20;
	dez = sac / 10;
	sac = sac % 10;
	sinc = sac / 5;
	sac = sac % 5;
	dois  = sac /2;
	
	printf("N� notas R$ 100,00:%d\n",cem);
	printf("N� notas R$ 50,00:%d\n",cenq);
	printf("N� notas R$ 20,00:%d\n",vint);
	printf("N� notas R$ 10,00:%d\n",dez);
	printf("N� notas R$ 5,00:%d\n",sinc);
	printf("N� notas R$ 2,00:%d\n",dois);
}
