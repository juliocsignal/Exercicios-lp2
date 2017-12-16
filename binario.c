#include <stdio.h>

int main()
{
	int a = 3; // 10
	int b = 3; // 11 
			   //OR de 1 e 1 = 1 e OR de 0 e 1 = 1 == 11
			   //AND de 1 e 1 = 1 e AND de 0 e 1 = 0 == 10
	
	printf("Porta AND resultado: %d\n", a&&b);
	printf("Porta AND Bit-a-Bit resultado: %d\n", a&b);
	printf("Porta OR resultado: %d\n", a||b);
	printf("Porta OR Bit-a-Bit resultado: %d\n", a|b);
	
	return 0;
}
