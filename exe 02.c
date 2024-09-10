/*Crie uma função que verifique se um ano fornecido é bissexto. 
Retorne 1 se for bissexto, caso contrário, a função não deve retornar nada. 
Um ano é bissexto se for divisível por 4, exceto os divisíveis por 100, a menos que também sejam divisíveis
por 400.*/
#include <stdio.h>
#include <locale.h>
int bi(int test);

int bi(int test){
	if (((test%4==0)&&(test%100!=0))||(test%400==0))
	return 1;
	else {
		return 0;
}}

int main(){
	int ano,p;
	setlocale (LC_ALL,"portuguese");
	printf("digite o ano para ver se é bi-sexto ");
	scanf("%d",&ano);
	p=bi(ano);
printf("%d",p);
}


