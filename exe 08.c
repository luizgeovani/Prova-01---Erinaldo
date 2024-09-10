/*8. Elabore uma função que calcule o imposto sobre um salário com base no valor
recebido. Se o salário for maior que R$ 5.000,00, o imposto será de 20%. Caso
contrário, o imposto será de 10%. A função deve exibir o valor do imposto a ser
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
		printf("será cobrado um imposto de 20%%\n");
		printf("receberá %.2f",(x*0.80));
	}
	else {printf("será cobrado um imposto de 10%%\n");
	printf("receberá %.2f",(x*0.90));
	}
}

