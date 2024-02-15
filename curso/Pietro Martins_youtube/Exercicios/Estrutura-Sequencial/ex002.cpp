#include <stdio.h>

int main (){
	float not1, not2, not3,media;
	
	printf("Informe tres notas, em seguencia:\n");
	scanf("%f %f %f", &not1, &not2,&not3);
	
	media = (not1 + not2 + not3) / 3;
	
	printf("Media aritmetica:%2.f",media);
}
