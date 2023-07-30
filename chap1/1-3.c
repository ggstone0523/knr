#include <stdio.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ... , 300 */

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; /* lower limit of temperature table */
	upper = 300; /* upper limit */
	step = 20; /* step size */

	fahr = lower;
	printf("fahr    celsius\n");
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%4.0f\t%7.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

	return 0;
}
