/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 02:12:40 by amartino          #+#    #+#             */
/*   Updated: 2018/09/06 10:58:26 by amartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	if (nb < 0 || nb >= 13)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	nb = nb * ft_iterative_factorial(nb - 1);
	return (nb);
}

int		main(void)
{
	printf("%d", ft_iterative_factorial(5));
	printf("\n%d", ft_iterative_factorial(-5));
	printf("\n%d", ft_iterative_factorial(0));
	printf("\n%d", ft_iterative_factorial(1));
	printf("\n%d", ft_iterative_factorial(13));
	printf("\n%d", ft_iterative_factorial(2018));
	printf("\n%d", ft_iterative_factorial(8));
	printf("\n%d", ft_iterative_factorial(2));
	return (0);
}
