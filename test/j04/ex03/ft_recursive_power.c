/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 11:48:52 by amartino          #+#    #+#             */
/*   Updated: 2018/09/06 10:50:54 by amartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	if (nb < 0)
		return (0);
	if (power == 0)
		return (1);
	nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
}

int		main(void)
{
	printf("%d", ft_recursive_power(2, 5));
	printf("\n%d", ft_recursive_power(-5, 5));
	printf("\n%d", ft_recursive_power(2568, 2655));
	printf("\n%d", ft_recursive_power(0, 5));
	printf("\n%d", ft_recursive_power(10, 0));
	printf("\n%d", ft_recursive_power(1, 5));
	printf("\n%d", ft_recursive_power(9, 9));
	return (0);
}
