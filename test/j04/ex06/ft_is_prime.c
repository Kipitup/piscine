/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 18:12:06 by amartino          #+#    #+#             */
/*   Updated: 2018/09/06 11:00:33 by amartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int		i;

	i = 3;
	if (nb == 2)
		return (1);
	if ((nb % 2) == 0 || nb == 1 || nb <= 0)
		return (0);
	while (i < (nb / i))
	{
		if ((nb % i) == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		main(void)
{
	printf("%d\n", ft_is_prime(2147200153));
	printf("%d\n", ft_is_prime(214700153));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(-2147200153));
	printf("%d\n", ft_is_prime(1562));
	printf("%d\n", ft_is_prime(2147483647));
	return (0);
}
