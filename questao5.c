#include <stdio.h>
void inverteVetor(int indice,int vetor[indice])
{
	int i;
	
	 for(i=0;i<indice/2;i++)//conta até metade do vetor
	 {
		//vetor[i],vetor[indice-i-1]
		
		//troca dos valores
		vetor[i] = vetor[i] + vetor[indice - i - 1];
		vetor[indice - i - 1] = vetor[i] - vetor[indice - i -1];
		vetor[i]= vetor[i] - vetor[indice - i - 1];
     }
}
int main()
{
	int i,vetor[5];
	
	for(i=0;i<5;i++)
	{
		vetor[i] = i;
	}
	
	inverteVetor(5,vetor); //usando a funcao
	
	for(i=0;i<5;i++){
	printf("%d\n",vetor[i]);}
	
	return 0;
}
