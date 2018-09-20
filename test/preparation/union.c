/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 14:55:41 by amartino          #+#    #+#             */
/*   Updated: 2018/09/20 17:33:02 by amartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_check_arg1(char *av)
{
	int		i;
	int		j;

	i = 0;
	while (av[i] != '\0')
	{
		j = 0;
		while (av[i] != av[j] && av[j] != '\0')
			j++;
		if (i == j && av[j] != '\0')
			ft_putchar(av[i]);
		i++;
	}
}

void	ft_check_arg2(char *av1, char *av2)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	while (av2[i] != '\0')
	{
		j = 0;
		while (av2[i] != av2[j] && av2[j] != '\0')
			j++;
		if (i == j && av2[j] != '\0')
		{
			k = 0;
			while (av1[k] != av2[i] && av1[k] != '\0')
				k++;
			if (av1[k] == '\0')
				ft_putchar(av2[i]);
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
	{
	ft_check_arg1(av[1]);
	ft_check_arg2(av[1], av[2]);
	}
	else 
		ft_putchar('\n');
	return (0);
}
