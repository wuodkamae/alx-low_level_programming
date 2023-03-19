#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
printf("Last digit of %d is %d ", n,last_no);

int last_no = n % 10;

if (last_no > 5)
{
printf("and is greater than 5");
}
else if (last_no == 0)
{
printf("and is 0");
}
else if (last_no < 6 && !0)
{
printf("and is less than 6 and not 0");
}
	return (0);
}
