/*6. Elabore uma fun��o que receba a nota de um aluno (de 0 a 10) e classifique se
ele foi aprovado ou reprovado. A aprova��o ocorre se a nota for 7 ou superior, e
reprova��o caso contr�rio. A fun��o deve exibir mensagens para os dois casos.*/

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

