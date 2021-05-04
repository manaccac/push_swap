#include "../includes/push_swap.h"

t_global		ft_parsing(char	**av)
{
	int	i;
	int	j;
	int x;
	t_global global;

	i = 1;
	global.len = 0;
	// cette boucle va conter le nb qu il y a dans les arg ensuite on va pouvoir malloc A en foction et B aussi
	while (av[i])
	{
		j = i + 1;
		x = 0;
		while (av[j])
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
			{
				global.erreur = -1;
				return(global); //erreur duplicates numbers
			}
			j++;
		}
		while (av[i][x])
		{
			if (ft_isalnum(av[i][x]) == 0)
			{
				global.erreur = -2;
				return(global); // erreur not alnum
			}
			x++;
		}
		i++;
		global.len++;
	}
	global.a = calloc(sizeof(int), global.len + 1);
	global.b = calloc(sizeof(int), global.len + 1);
	global.result = calloc(sizeof(int), global.len + 1);
	global.a->len = global.len;
	i = 1;
	j = 0;
	// on mets tous dans le a;
	while (av[i])
	{
		global.a->lst[j] == ft_atoi(av[i]);
		i++;
		j++;
	}
	//creation de res qui sera le resulta attendu apres l'algo
	i = 0;
	x = 0;
	while (global.a->lst[i])
	{
		if (global.a->lst[i + 1] == "\0") // si on ne peut pas aller a j alors on mets le i a la fin et on sort de ce while
		{
			global.result[x] = global.a->lst[i];
			break;
		}
		j = i + 1;
		while (global.a->lst[i] > global.a->lst[j])
			j++;
		if (global.a->lst[i] < global.a->lst[j])
			global.result[x] = global.a->lst[j];
		else
			global.result[x] = global.a->lst[i];
		i++;
		x++;
	}
	global.min = global.result[0];
	global.max = global.result[global.len];
	return (global);
}