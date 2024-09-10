/*9. Crie uma funcao que receba o salario bruto de uma pessoa e calcule o valor do
Imposto de Renda Retido na Fonte (IRRF) com base na tabela de IRRF de 2024.
Utilize as aliquotas e deducoes conforme a tabela abaixo:
Åú Ate R$ 2.112,00: Isento
Åú De R$ 2.112,01 ate R$ 2.826,65: Aliquota de 7,5% (deducao de R$ 158,40)
Åú De R$ 2.826,66 ate R$ 3.751,05: Aliquota de 15% (deducao de R$ 370,40)
Åú De R$ 3.751,06 ate R$ 4.664,68: Aliquota de 22,5% (deducao de R$ 651,73)
Åú Acima de R$ 4.664,68: Aliquota de 27,5% (deducao de R$ 884,96)
Use a estrutura condicional aninhada para calcular o imposto corretamente. (0.4
ponto)*/

#include <stdio.h>
#include <locale.h>
void imposto_r(float x);

int main (){
	setlocale (LC_ALL,"portuguese");
	float sal;
	
	printf("digite seu salario ");
	scanf("%f",&sal);
	imposto_r(sal);
}

void imposto_r(float x){
	if (x<=2112){
		printf("seu salario nao tera descontos, È isento");
	}
	else if((x>2112)&&(x<=2826.65)){
		printf("tera um desconto de 7,5%%, recebera %.2f",(x-158.40));
	}
	else if((x>2826.65)&&(x<=3751.05)){
		printf("tera um desconto de 15%%, recebera %.2f",(x-370.40));
	}
	else if((x>3751.05)&&(x<=4664.68)){
		printf("tera um desconto de 22,5%%, recebera %.2f",(x-651.73));		
	}
	else if (x>4664.68){
	printf("tera um desconto de 27,5%%, recebera %.2f",(x-884.96));
}
}

