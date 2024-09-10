/*Crie uma função que receba três lados de um triângulo e verifique se esses lados
formam um triângulo válido. Um triângulo é válido se a soma de dois de seus lados
for sempre maior que o terceiro. Caso o triângulo seja válido, a função deverá
retornar 1. Caso contrário, não deve retornar nada*/
#include <stdio.h>
#include <locale.h>
int vdd(float n1, float n2, float n3);

int main (){
	setlocale (LC_ALL,"portuguese");
	int retorno;
	float l1,l2,l3;
	
	printf("digite o valor do lado 1 ");
	scanf("%f",&l1);
	printf("digite o valor do lado 2 ");
	scanf("%f",&l2);
	printf("digite o valor do lado 3 ");
	scanf("%f",&l3);
	retorno = vdd(l1,l2,l3);
	printf("%d",retorno);
	
}

int vdd(float n1,float n2, float n3){
if ((n1+n2>n3) && (n2+n3>n1) && (n1+n3>n2))
	return 1;
	else { 
	return 0;}
}

