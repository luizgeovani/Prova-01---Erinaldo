/*7. Desenvolva uma fun��o que receba um n�mero inteiro e determine se ele � par
ou �mpar. Exiba uma mensagem correspondente para cada caso.*/
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
