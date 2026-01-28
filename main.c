#include "./includes/main.h"

// init, parse, render, destroy (called with errno)
int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	int errno;

	init(&errno);
	if (!errno)
	{
		parse(&errno);
		if (!errno)
			render(&errno);
	}
	destroy();
	return (print_errno(&errno));
}
