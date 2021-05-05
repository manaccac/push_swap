#include "../includes/push_swap.h"

void	ft_pa(t_global *global)
{
	int i;
	int j;

	i = global->a->len + 1;
	j = 0;
	if (global->b->len < 1)
		return ;
	else
	{
		while (i != 0)
		{
			global->a->lst[i] = global->a->lst[i - 1];
			i--;
		}
		if (i == 0)
			global->a->lst[0] = global->b->lst[0];
		global->a->len++;
		while (j != global->b->len - 1)
		{
			global->b->lst[j] = global->b->lst[j + 1];
			j++;
		}
		global->b->len--;
	}
}