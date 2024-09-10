/*6. Elabore uma função que receba a nota de um aluno (de 0 a 10) e classifique se
ele foi aprovado ou reprovado. A aprovação ocorre se a nota for 7 ou superior, e
reprovação caso contrário. A função deve exibir mensagens para os dois casos.*/

#include <stdio.h>
void aprovado(float n1);

int main(){
float nota;
	printf("informe a sua nota");
	scanf("%f",&nota);
	aprovado(nota);
	
}
void aprovado(float n1){
	if ((n1>=7) && (n1<=10)){
		printf("aprovado");
	}
	else{
		printf("reprovado");
	}
}

