/*10. Elabore uma funcao que receba o salario bruto de uma pessoa e calcule o valor
da contribuicao ao INSS com base na tabela de INSS de 2024. Utilize as faixas e
aliquotas progressivas para calcular o valor da contribuicao:
Åú Ate R$ 1.320,00: 7,5%
Åú De R$ 1.320,01 ate R$ 2.571,29: 9%
Åú De R$ 2.571,30 ate R$ 3.856,94: 12%
Åú De R$ 3.856,95 ate R$ 7.507,49: 14%
Use a estrutura condicional aninhada para calcular o desconto corretamente.*/
#include <stdio.h>
#include <locale.h>
int main(){
	setlocale (LC_ALL,"portuguese");
	float sal;
	printf("informe o salario bruto que direi qnto de desconto vai ter ");
	scanf("%f",&sal);
	if (sal<=1320){
		printf("salario liquido %.2f",(sal*0.925));
	}
	else if ((sal>1320) && (sal<=2571.29)){
		printf("salario liquido %.2f",(sal*0.88));
	}
	else if ((sal>2571.29)&&(sal<=3856.94)){
		printf("salario liquido %.2f",(sal*0.88));
	}
	else if ((sal>3856.94)&&(sal<=7507.49)){
		printf("salario liquido %.2f",(sal*0.86));
	}
	
	
}
