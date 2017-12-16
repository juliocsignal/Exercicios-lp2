#include <stdio.h>

int main()
{
	FILE *arq; //declaracao da variavel de arquivo
	FILE *saida; //declaracao da variavel de arquivo
	int i = 0;
	float maior=0;
	float aux;
	
	arq = fopen("arquivo.txt","r"); //comando para abrir o arquivo para leitura
	saida = fopen("saida.txt","w"); //comando para abrir o arquivo para gravacao
	
	for (i=0;i<10;i++) 
	{
		fscanf(arq,"%f",&aux);
		if(aux > maior){
			maior = aux;
		}
	}
	
	fprintf(saida,"%.2f",maior);
	fclose(arq); //comando para fechar o arquivo
	fclose(saida); //comando para fechar o arquivo
	
	
	
	
	return 0;
}
