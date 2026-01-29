/*
should be the only header most .c files include, 
unless a module is intentionally isolated.
*/


#ifndef MAIN_H
# define MAIN_H
						/* Allowed functions: */
# include <stdlib.h>	/* malloc, free, exit */
# include <unistd.h>	/* read, write, close */
# include <fcntl.h>		/* open, O_* flags */
# include <math.h>		/* whole math library */
# include <stdio.h>		/* printf */
# include <string.h>	/* strerror */
# include <sys/time.h>	/* gettimeofday */
# include <errno.h>		/* errno for perror/strerror */

# include "types.h"
# include "parser.h"
# include "render.h"
# include "errors.h"
# include "utils.h"
# include "libft.h"

int	cub3d_run(int argc, char **argv);

#endif
