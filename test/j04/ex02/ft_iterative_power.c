/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 11:47:15 by amartino          #+#    #+#             */
/*   Updated: 2018/09/06 10:47:39 by amartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int		i;
	int		tmp;

	i = 1;
	tmp = nb;
	if (nb < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > i)
	{
		nb *= tmp;
		power--;
	}
	return (nb);
}

int		main(void)
{
	printf("\n%d", ft_iterative_power(2, 5));
	printf("\n%d", ft_iterative_power(-5, 5));
	printf("\n%d", ft_iterative_power(2568, 2655));
	printf("\n%d", ft_iterative_power(0, 5));
	printf("\n%d", ft_iterative_power(10, 0));
	printf("\n%d", ft_iterative_power(1, 5));
	printf("\n%d", ft_iterative_power(9, 9));
	return (0);
}
