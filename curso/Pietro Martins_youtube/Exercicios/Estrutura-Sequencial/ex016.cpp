#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int nas,atual,futu,ago; 
	
	printf("Insira da bata de nascimento:\n");
	scanf("%d",&nas);
	printf("Insira o ano atual:\n");
	scanf("%d",&atual);
	
	ago = atual - nas;
	futu = 2030 - nas;
	
	printf("Idade atual:%d\n",ago);
	printf("Sua idade em 2030:%d\n",futu);
	
}
