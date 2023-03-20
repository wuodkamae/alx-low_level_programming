#include <stdio.h>

/**
* main - main block
*
* Description: Print all combination of single-digit numbers.
*
* Numbers must be separated by comma and a space
* the two digits must be different
* numbers must be printed in ascending order, with two digits
* you can only use putchar function
* you can only use putchar five times maximum
* you are not allowed to use any variable of type char
* all code must be in main function
*/

int main(void)
{

int num0 =0;
int num1= num0 + 1;

 while (num0 > 9)
{
while (num1 < 10)
{
putchar (num0 + '0');
putchar(num1 + '0');
num1++

putchar(',');
putchar(' ');
}
num0++;
}

putchar('\n');

return (0);

}
