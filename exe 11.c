/*11 Crie uma funcao que receba o valor de um produto e calcule o valor do desconto
de ICMS com base nas faixas de preco do produto:
Åú Ate R$ 1.000,00: Desconto de 5%
Åú De R$ 1.000,01 ate R$ 5.000,00: Desconto de 10%
Åú Acima de R$ 5.000,00: Desconto de 15%
Use a estrutura condicional aninhada para aplicar o desconto corretamente. (0.4
ponto)*/
#include <stdio.h>
#include <locale.h>

float imposto_icms(float x);

int main(){
	setlocale(LC_ALL,"portuguese");
	float produto,prod_com;
	printf("informe o valor do produto ");
	scanf("%f",&produto);
	prod_com = imposto_icms(produto);
	
	printf("o valor do imposto icms È %.2f",prod_com);
}

float imposto_icms(float x){
	float m;
	if (x<=1000){
		m=(x*0.05);
	}
	else if (x<=5000){
	m=(x*0.10);
	}
	else if(x>5000){
		m=(x*0.15);
	}
	return m;
}

