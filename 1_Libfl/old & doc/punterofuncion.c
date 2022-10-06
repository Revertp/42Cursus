#include <stdio.h>

int	ftc(char c, char o)
{
	printf("%d\n",'c' + 'o');
	return (0);
}

int	main(void)
{
	int (*ptr)(char, char);

	ptr = &ftc;
	(*ptr)('o', 'c');
	return(0);
}
