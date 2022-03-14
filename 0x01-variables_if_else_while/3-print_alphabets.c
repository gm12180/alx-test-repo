#include<stdio.h>
Int main(void)
{
	char c = ‘a’;

	for (c='a', c<= ‘z', c++)
	{ 
	putchar(c);
	}
	for (c = 'A', c<= 'Z', c++)
	{
		putchar(c);
	}
	putchar('\n')
	return 0;
}
