//4)Elabore uma fun��o que receba tr�s lados de um tri�ngulo e verifique se ele � um
//tri�ngulo ret�ngulo. Um tri�ngulo � ret�ngulo se o quadrado da hipotenusa (o maior
//lado) for igual � soma dos quadrados dos outros dois lados. Caso o tri�ngulo seja
//ret�ngulo, a fun��o dever� informar ao usu�rio que o tri�ngulo � ret�ngulo, caso
//contr�rio, n�o dever� fazer nada.

#include<stdio.h>

void tri(int n1, int n2, int n3) {
	if (n1 * n1 == (n2 * n2 + n3 * n3) || (n3 * n3 == (n1 * n1 + n2 * n2) || (n2 * n2 == (n3 * n3 + n1 * n1)))){
		printf("O triangulo e retangulo");
	}
}

int main() {
	
	int n1,n2,n3;
	
	printf("Informe o 1 lado do triangulo: ");
	scanf("%d", &n1);
	printf("Informe o 2 lado do triangulo: ");
	scanf("%d", &n2);
	printf("Informe o 3 lado do triangulo: ");
	scanf("%d", &n3);
	
	tri(n1,n2,n3);
	
	
	return 0;	
}



