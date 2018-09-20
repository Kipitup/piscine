/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 20:26:01 by amartino          #+#    #+#             */
/*   Updated: 2018/09/16 13:15:14 by amartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_integer_table(int *tab, int size)
{
	int		i;
	int		n;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i + 1] < tab[i])
		{
			n = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = n;
			ft_sort_integer_table(tab, size);
		}
	i++;
	}
}

int		main(void)
{
	int		tab[5] = {2, 6, 3, 1, 1};
	int i = 0;
	ft_sort_integer_table(tab, 5);

	while (i < 5)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}
