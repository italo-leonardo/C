#include <stdio.h>

int main(){
	int i,j,res;
	i=1;
	while(i<=10){
		j=1;
		while(j<=10){
			res = i*j;
			printf("%d x %d = %d\n",i,j,res);
			j++;
		}
		printf("\n");
		i++;
	}
	
}
