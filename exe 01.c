/*1. Crie uma fun��o que receba um n�mero inteiro de 1 a 10 e retorne 1 se o n�mero
for primo. Caso contr�rio, n�o retorne nada. Voc� n�o pode usar la�os de repeti��o,
por essa raz�o, limite a verifica��o a um conjunto pequeno de n�meros para
verificar se s�o primos. Um n�mero primo � divis�vel apenas por 1 e por ele mesmo.*/
#include <stdio.h>
#include <locale.h> 
int main()
{
	setlocale (LC_ALL,"portuguese");
	int n1;
	printf("digite um numero de 1 a 10 e vamos verificar se � primo \n");
	printf("digite um numero ");
	scanf("%d",&n1);
	if ((n1==2)||(n1==3)||(n1==5)||(n1==7))
	{
		printf("%d � primo ou 1",n1);
	} else { 
			printf("tente novamente ");
			scanf("%d",&n1);
	 		if ((n1==2)||(n1==3)||(n1==5)||(n1==7))
			 {
				printf("%d � primo ou 1",n1);
			 }
			
			else {
					printf("terceira tentativa ");
					scanf("%d",&n1);
					if ((n1==2)||(n1==3)||(n1==5)||(n1==7))
					printf("%d � primo ou 1",n1);
					}

}
}	

