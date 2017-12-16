#include <stdio.h>

int maior(int a, int b, int c)
{
	if (a > b && a > c)
	{
		return a;
	}
	
	if (b > a && b > c)
	{
		return b;
	}
	
	if (c > a && c > b)
	{
		return c;
	}
	
	return 144;
}

int main()
{
	int num,num2,num3;
	
	printf("Digite um numero");
	scanf("%d",&num);
	printf("Digite um numero");
	scanf("%d",&num2);
	printf("Digite um numero");
	scanf("%d",&num3);
	
	int maiorNum = maior(num,num2,num3);
	
	printf("O maior numero e: %d",maiorNum);
	
}

