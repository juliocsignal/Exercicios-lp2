#include <stdio.h>
#include <strings.h>

struct funcionario
{
	char nome[50];
	int salario;
};
int main()
{
	struct funcionario julio;
	
	//julio.nome[50] = "julio";
	//julio.salario=100;

	printf("digite seu salario");
	scanf("%d",&julio.salario);
	//printf("%s",julio.nome);
	printf("%d",julio.salario);
}
