#include <stdio.h>

int main(void)

{

char my_let = 'a';
char my_let1 = 'A';

while (my_let <= 'z')
{
putchar (my_let);
my_let++;
}

while (my_let1 <= 'Z')
{
putchar(my_let1);
my_let1++;
}
putchar('\n');
}
