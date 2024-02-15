#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float num,alt,i,n_maior,maior,menor,n_menor;
	
	for(i=1;i<=10;i++){
		printf("Insira o número do aluno:\n");
		scanf("%f",&num);
		fflush(stdin);
		printf("Insira a altura do aluno:\n");
		scanf("%f",&alt);
		fflush(stdin);
		if(i == 1){
			maior = alt;
			n_maior = num;
			menor = alt;
			n_menor = num;
		} else {
			if(alt > maior){
				maior = alt;
				n_maior = num;
			}
			if(alt < menor){
				menor = alt;
				n_menor = num;
			}
		}
	}
	printf("Número do maior aluno:%f.\n",n_maior);
	printf("Altura do maior aluno: %f.\n",maior);
	printf("Número do menor aluno:%f.\n",n_menor);
	printf("Altura do menor aluno:%f.\n",menor);
	
	return 0;
}
