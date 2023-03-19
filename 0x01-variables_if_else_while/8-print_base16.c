#include <stdio.h>

int main(void)

{
int mynum = 0;
char mych = 'a';

while (mynum <= 10)
{
putchar(mynum + '0');
mynum++;
}
while (mych <= 'f')
{
putchar(mych);
mych++;
putchar('\n');


}

return (0);
}

