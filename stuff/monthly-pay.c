/*
 * Don't ask me why
 */

#include <stdio.h>

int main()
{
	int hours, pay = 0;
	
	printf("Input the amount of working hours per month: ");
	scanf("%d", &hours);

	if (hours < 0)
		return 1;

	pay = 15 * hours;
	
	if (hours > 50)
		pay -= 50;
	
	if (hours > 100)
		pay -= 100;

	printf("The pay is: %d ?\n", pay);
}
