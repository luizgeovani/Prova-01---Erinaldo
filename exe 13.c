//13. Crie um programa que simule uma calculadora simples. O programa deve
//permitir ao usu�rio escolher entre quatro opera��es aritm�ticas: soma, subtra��o,
//multiplica��o e divis�o. O usu�rio deve informar a opera��o desejada e dois
//n�meros. O programa deve realizar a opera��o selecionada e exibir o resultado.
//Caso a opera��o n�o seja reconhecida, o programa deve informar um erro.



#include<stdio.h>
#include<string.h>

float operacao(float n1, float n2, char calc[]) {
	float m;
	if (strcmp(calc, "soma")== 0) {
        m = n1 + n2;
	}else if (strcmp(calc, "subtracao") == 0) {
		m = n1 - n2;
	}else if (strcmp(calc, "multiplicacao") == 0) {
		m = n1 * n2;
	}else if (strcmp(calc, "divisao") == 0){
		m = n1 / n2;
	}else {
		m = printf("OPERACAO INVALIDA");
		return 0;
	}
		return m;
}


int main () {
	
	float n1, n2, resultado;
	char calc[20] = "";
	
	printf("Informe o tipo de operacao: ");
	scanf("%s", &calc);
	printf("Informe o primeiro valor: ");
	scanf("%f", &n1);
	printf("Informe o segundo valor: ");
	scanf("%f", &n2);
	
	resultado = operacao(n1, n2, calc);
	
	printf("\n A operacao e %s e o resultado e %.2f", calc, resultado);
	
}
