//12. Desenvolva uma funcao que receba o valor venal de um imovel e calcule o valor
//do IPTU com base na tabela abaixo:
//Åú Ate R$ 100.000,00: Aliquota de 1%
//Åú De R$ 100.000,01 ate R$ 300.000,00: Aliquota de 1,5%
//Åú De R$ 300.000,01 ate R$ 500.000,00: Aliquota de 2%
//Åú Acima de R$ 500.000,00: Aliquota de 2,5%


#include <stdio.h>



float calcula (float imovel) {
	float m;
	if(imovel <= 100000){
		m = imovel * 0.01;
	}else if (imovel <= 300000){
		m = imovel * 0.015;
	}else if (imovel <= 500000){
		m = imovel * 0.02;
	}else {
		m = imovel * 0.025;
	}
		return m;
}


float main () {
	float imovel, iptu; 
	
	printf("Informe o valor do imovel: ");
	scanf("%f", &imovel);
	
	iptu = calcula(imovel);
	
	printf("O valor do iptu e de: %.2f", iptu);
	
	return 0;
	
	
}
