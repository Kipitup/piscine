/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 02:40:06 by amartino          #+#    #+#             */
/*   Updated: 2018/09/06 10:41:54 by amartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int		i;

	i = nb - 1;
	if (nb < 0 || nb >= 13)
		return (0);
	if (nb == 0)
		return (1);
	while (i > 0)
	{
		nb = nb * i;
		i--;
	}
	return (nb);
}

int		main(void)
{
	printf("%d", ft_iterative_factorial(0));
	printf("\n%d", ft_iterative_factorial(-5));
	printf("\n%d", ft_iterative_factorial(15));
	printf("\n%d", ft_iterative_factorial(12));
	printf("\n%d", ft_iterative_factorial(5));
	printf("\n%d", ft_iterative_factorial(2));
	printf("\n%d", ft_iterative_factorial(1));
	return (0);
}
