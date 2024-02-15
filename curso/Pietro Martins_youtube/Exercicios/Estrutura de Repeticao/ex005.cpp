#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int ano,cha,bos;
	cha = 140;
	bos = 145;
	
	for(ano=0;cha<=bos;ano++){
		cha = cha + 2.1;
		bos = bos + 1.1;
		
	}
	printf("Anos:%d",ano);
	
}
