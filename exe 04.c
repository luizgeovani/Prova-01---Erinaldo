//4)Elabore uma função que receba três lados de um triângulo e verifique se ele é um
//triângulo retângulo. Um triângulo é retângulo se o quadrado da hipotenusa (o maior
//lado) for igual à soma dos quadrados dos outros dois lados. Caso o triângulo seja
//retângulo, a função deverá informar ao usuário que o triângulo é retângulo, caso
//contrário, não deverá fazer nada.

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



