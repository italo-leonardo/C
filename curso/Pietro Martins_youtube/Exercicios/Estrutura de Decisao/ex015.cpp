#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	float sal,novo,bone,cal,cal2,auxi;
	
	printf("Insira o seu sal�rio:\n");
	scanf("%f",&sal);
	
	if(sal <= 500){
		cal = (sal * 5/100) + sal + 150;
		printf("Sal�rio + Bonifiaca��o 5 + Auxilio:%f\n",cal);
	}
	if(sal>=500.01 && sal<=1200){
		cal2 = (sal * 12/100) + sal;
		printf("Sal�rio + Bonifica��o 12:%f\n",cal2);
		if(cal2>600){
		auxi = cal2 + 100;
		printf("Sal�rio + Bonifiaca��o 12 + Auxilio:%f\n",auxi);
	}
	}	
	if(sal>1200){
		auxi = sal + 100;
		printf("Salario Sem Bonifica��o + Auxilio:%f\n",auxi);
	}
	
}
