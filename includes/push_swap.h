#ifndef PUSH_SWAP
# define PUSH_SWAP

# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"

typedef struct	s_global
{
	int		max;		//nb max
	int		min;		//nb min
	int		len;		//combien y a t il de nb en tous
	int		*result;	//tableau avec la forme final de push_swap

	struct s_a *a;
	struct s_b *b;

}				t_global;

typedef struct	s_a
{
	int		*lst;		//le lst de A 
	int		len;		//le nb que contient A
}				t_a;

typedef struct	s_b
{
	int		*lst;		//le lst de B
	int		len;		//le nb que contient B
}				t_b;

#endif