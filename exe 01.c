/*1. Crie uma função que receba um número inteiro de 1 a 10 e retorne 1 se o número
for primo. Caso contrário, não retorne nada. Você não pode usar laços de repetição,
por essa razão, limite a verificação a um conjunto pequeno de números para
verificar se são primos. Um número primo é divisível apenas por 1 e por ele mesmo.*/
#include <stdio.h>
#include <locale.h> 
int main()
{
	setlocale (LC_ALL,"portuguese");
	int n1;
	printf("digite um numero de 1 a 10 e vamos verificar se é primo \n");
	printf("digite um numero ");
	scanf("%d",&n1);
	if ((n1==2)||(n1==3)||(n1==5)||(n1==7))
	{
		printf("%d é primo ou 1",n1);
	} else { 
			printf("tente novamente ");
			scanf("%d",&n1);
	 		if ((n1==2)||(n1==3)||(n1==5)||(n1==7))
			 {
				printf("%d é primo ou 1",n1);
			 }
			
			else {
					printf("terceira tentativa ");
					scanf("%d",&n1);
					if ((n1==2)||(n1==3)||(n1==5)||(n1==7))
					printf("%d é primo ou 1",n1);
					}

}
}	

