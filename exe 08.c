/*8. Elabore uma fun��o que calcule o imposto sobre um sal�rio com base no valor
recebido. Se o sal�rio for maior que R$ 5.000,00, o imposto ser� de 20%. Caso
contr�rio, o imposto ser� de 10%. A fun��o deve exibir o valor do imposto a ser
pago.*/
#include <stdio.h>
#include <locale.h>
void imposto(float x);

int main(){
setlocale (LC_ALL,"portuguese");
	float sal;
	
	printf("digite o seu salario ");
	scanf("%f",&sal);
	imposto(sal);
	
}

void imposto(float x){
	if (x>5000.00){
		printf("ser� cobrado um imposto de 20%%\n");
		printf("receber� %.2f",(x*0.80));
	}
	else {printf("ser� cobrado um imposto de 10%%\n");
	printf("receber� %.2f",(x*0.90));
	}
}

