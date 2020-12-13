/*
 * Input 10 numbers and output the sum
 */

#include <stdio.h>

int main()
{
	float a, sum = 0;

	printf("Input 10 numbers\n");
	
	for (int i = 0; i < 10; i++) {
		scanf("%f", &a);
		sum += a;
	}

	printf("%f\n", sum);
}
