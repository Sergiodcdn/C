#include <stdio.h>

// para ajudar na organiza��o:
// antes do main vai o prot�tipo da fun��o:
float maior(float num1, float num2);

int main(){
	float x, y, m;
	
	printf("Insira um valor:\n");
	scanf("%f", &x);
	printf("Insira mais um valor:\n");
	scanf("%f", &y);
	
	m = maior(x, y);
	
	printf("Maior valor: %.2f\n", m);
}

// aqui as fun��es:
float maior(float num1, float num2){
	if(num1 > num2)
		return num1;
	else
		return num2;
}
