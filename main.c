#include "ref.h"
#include <stdlib.h>

int		main(int argc, char** argv)
{
	if (argc == 2)
	{
		ft_putnbr(ft_atoi(argv[1]));
		ft_putchar('\n');
		ft_putnbr(atoi(argv[1]));
	}
	return (0);
}
