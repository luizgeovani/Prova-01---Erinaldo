//13. Crie um programa que simule uma calculadora simples. O programa deve
//permitir ao usuário escolher entre quatro operações aritméticas: soma, subtração,
//multiplicação e divisão. O usuário deve informar a operação desejada e dois
//números. O programa deve realizar a operação selecionada e exibir o resultado.
//Caso a operação não seja reconhecida, o programa deve informar um erro.



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
