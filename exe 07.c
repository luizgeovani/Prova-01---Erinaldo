/*7. Desenvolva uma função que receba um número inteiro e determine se ele é par
ou ímpar. Exiba uma mensagem correspondente para cada caso.*/
#include <stdio.h>
void par_impar(int n1);

int main(){
int x;
printf("digite um valor ");
scanf("%d",&x);
par_impar(x);
	
	
}

void par_impar(int n1){

if (n1%2>0){
printf("impar");}
else
{printf("par");
}
}
