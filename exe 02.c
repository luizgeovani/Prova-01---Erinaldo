/*Crie uma fun��o que verifique se um ano fornecido � bissexto. 
Retorne 1 se for bissexto, caso contr�rio, a fun��o n�o deve retornar nada. 
Um ano � bissexto se for divis�vel por 4, exceto os divis�veis por 100, a menos que tamb�m sejam divis�veis
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
	printf("digite o ano para ver se � bi-sexto ");
	scanf("%d",&ano);
	p=bi(ano);
printf("%d",p);
}


