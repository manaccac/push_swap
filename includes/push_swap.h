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
	int		erreur;

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


t_global		ft_parsing(char	**av);


void			ft_sa(t_global *global);
void			ft_sb(t_global *global);
void			ft_ss(t_global *global);
void			ft_pa(t_global *global);
void			ft_pb(t_global *global);
void			ft_ra(t_global *global);
void			ft_rb(t_global *global);
void			ft_rr(t_global *global);
void			ft_rra(t_global *global);
void			ft_rrb(t_global *global);
void			ft_rrr(t_global *global);

#endif