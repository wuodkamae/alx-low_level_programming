#include <stdio.h>

int main(void)

{

int num =0;

while (num <=9)
{
putchar(num + '0');
num++;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
