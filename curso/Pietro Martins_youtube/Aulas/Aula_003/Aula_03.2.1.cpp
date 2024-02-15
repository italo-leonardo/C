#include <stdio.h>

int main(){
	int dado = 10;
	printf("Dado antes do inclemento:%d.\n", dado);
	
	dado++;
	printf("Depois do inclemento:%d.\n", dado);
	
	dado--;
	printf("Depois do decremento:%d.\n",dado);
	
	dado+=3;
	printf("Depois do inchemento em 3 unidades:%d.\n",dado);
	
	dado-=3;
	printf("Dapois do decremento em 3 unidades:%d.\n",dado);
	
	dado*=5;
	printf("Dapois de multiplicar por 5:%d.\n",dado);
	
	dado/=5; 
	printf("Depois de dividir por 5:%d.\n",dado);

}
