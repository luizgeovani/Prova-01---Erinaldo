/*Crie uma fun��o que receba a idade de uma pessoa e verifique se ela � maior de
idade (18 anos ou mais). A fun��o deve exibir uma mensagem diferente para os
casos em que a pessoa � maior ou menor de idade.*/
#include <stdio.h>
void verifica(int idade){
	if (idade>=18){
		printf("� maior de idade");
	}
	else {
		printf("� menor");
	}
}

int main (){
	int id;
	printf("insira sua idade ");
	scanf("%d",&id);
	verifica(id);
	
}
