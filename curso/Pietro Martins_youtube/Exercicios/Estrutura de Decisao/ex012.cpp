#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int i,a,b,c;
	
	printf("Insira o primeiro número (A):\n");
	scanf("%d",&a);
	printf("Insira o segundo número (B):\n");
	scanf("%d",&b);
	printf("Insira o terceiro número (C):\n");
	scanf("%d",&c);
	printf("Insira a opção (I):\n");
	scanf("%d",&i);
	
	if(i == 2){
		if(a>b && a>c && b>c){
			printf("%d-%d-%d",a,b,c);
		} 
		if(a>b && a>c && b<c){
			printf("%d-%d-%d",a,c,b);
		} 
		if(b>a && b>c && a>c){
			printf("%d-%d-%d",b,a,c);
		} 
		if(b>a && b>c && a<c){
			printf("%d-%d-%d",b,c,a);
		} 
		if(c>a && c>b && a>b){
			printf("%d-%d-%d",c,a,b);
		}
		if(c>a && c>b && a<b){
			printf("%d-%d-%d",c,b,a);
		}
	} 
	if(i == 1){
		if(a<b && a<c && b<c){
			printf("%d-%d-%d",a,b,c);
		} 
		if(a<b && a<c && b>c){
			printf("%d-%d-%d",a,c,b);
		} 
		if(b<a && b<c && a<c){
			printf("%d-%d-%d",b,a,c);
		} 
		if(b<a && b<c && a>c){
			printf("%d-%d-%d",b,c,a);
		} 
		if(c<a && c<b && a<b){
			printf("%d-%d-%d",c,a,b);
		}
		if(c<a && c<b && a>b){
			printf("%d-%d-%d",c,b,a);
		}
		
	}
	if(i == 3){
		if(a>b && a>c && b>c){
			printf("%d-%d-%d",b,a,c);
		}
		if(a>b && a>c && b<c){
			printf("%d-%d-%d",b,a,c);
		}
		if(b>a && b>c && a>c){
			printf("%d-%d-%d",a,b,c);
		}
		if(b>a && b>c && a<c){
			printf("%d-%d-%d",c,b,a);
		}
		if(c>a && c>b && a>b){
			printf("%d-%d-%d",a,c,b);
		}
		if(c>a && c>b && a<b){
			printf("%d-%d-%d",a,c,b);
		}
		
	}
}
