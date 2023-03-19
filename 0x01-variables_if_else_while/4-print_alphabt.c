#include <stdio.h>

int main(void)

{

char my_let = 'a';

while (my_let <= 'z')
{
if (my_let != 'q' && my_let !='e')
putchar(my_let);
putchar('\n');
my_let++;
}
}
