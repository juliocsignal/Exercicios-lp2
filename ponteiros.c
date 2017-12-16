#include <stdio.h>

int main()
{
	int a;
	int *pont;
	
	pont = &a;
	
	scanf("%d",pont);
	
	printf("%d",*pont);	
	
}
