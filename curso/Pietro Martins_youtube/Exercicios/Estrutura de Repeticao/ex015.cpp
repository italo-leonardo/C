#include <stdio.h>

int main(){
	int N,I,J;
	float res,fat;
	
	printf("Insira o valor de N:\n");
	scanf("%d",&N);
	res = 1;
	for(I=1;J<=N;I++){
		fat = 1;
		for(J=1;J<=I;J++){
			fat = fat * (float)J;
		}
		res = res + 1/fat;
	}
	printf("Resultado: %f\n",res);
}
