#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int	my_int_tab[42];
	int	a;
	int *p;

	my_int_tab[0] = 15;
	p = &(my_int_tab[0]);
	my_int_tab[0] = 14;
	*p = 1;
	printf("Value:  %d\n", my_int_tab[0]);
	*(p + 1) = 4;
	printf("Value:  %d\n", my_int_tab[1]);
	printf("Value:  %d\n", *p);
	p++;
	printf("Value:  %d\n", *p);

}
