/*Crie uma função que receba a idade de uma pessoa e verifique se ela é maior de
idade (18 anos ou mais). A função deve exibir uma mensagem diferente para os
casos em que a pessoa é maior ou menor de idade.*/
#include <stdio.h>
void verifica(int idade){
	if (idade>=18){
		printf("é maior de idade");
	}
	else {
		printf("é menor");
	}
}

int main (){
	int id;
	printf("insira sua idade ");
	scanf("%d",&id);
	verifica(id);
	
}
