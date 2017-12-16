#include <stdio.h>

int main()
{
	char nome[50]; //variavel do nome da pessoa
	printf("Digite seu nome:");
	scanf("%s",&nome); //leitura do nome
	int cont = strlen(nome);//Conta quantidade de caracteres
	printf("%d",cont);//Escreve o resultado
	
	return 0;
}
