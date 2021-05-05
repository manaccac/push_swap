#include "../includes/push_swap.h"

int ft_check_dupl(int j, int *res, int c)
{
	//ft_checker doublon
	int o = 0;
	while (o != j)
	{
		if (res[o] == c)
			return (1);
		o++;
		/* code */
	}
	return (0);
}

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
			if (ft_isalnum(av[i][x]) == 0 && (av[i][x] == '-' && (av[i][x + 1] == '\0' || ft_isalnum(av[i][x + 1]) == 0))) // verif si ce nest pas ecrit -1 ou bien que ce nets pqs un chiffre
			{
				global.erreur = -2;
				return(global); // erreur not alnum
			}
			x++;
		}
		i++;
		global.len++;
	}
	global.a->lst = calloc(sizeof(int), global.len + 1);
	global.b->lst = calloc(sizeof(int), global.len + 1);
	global.result = calloc(sizeof(int), global.len + 1);
	i = 1;
	j = 0;
	// on mets tous dans le a;
	while (av[i])
	{
		global.a->lst[j] = ft_atoi(av[i]);
		global.result[j] = ft_atoi(av[i]);
		i++;
		j++;
	}
	global.a->len = global.len;

	//creation du globale.result qui sera notre tableau fini pour comparer
	int temp;
	i = 0;
	while (i != global.len)
	{
		j = i + 1;
		while (j != global.len)
		{
			if (global.result[j] < global.result[i])
			{
				temp = global.result[j];
				global.result[j] = global.result[i];
				global.result[i] = temp;
			}
			j++;
		}
		i++;
	}

	return (global);
}