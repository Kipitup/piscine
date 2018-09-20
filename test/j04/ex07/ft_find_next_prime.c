/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 22:54:43 by amartino          #+#    #+#             */
/*   Updated: 2018/09/06 16:42:50 by amartino         ###   ########.fr       */
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
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	int		i;

	i = 1;
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (ft_is_prime(nb + i) != 1)
	{
		i++;
	}
	return (nb + i);
}

int		main(void)
{
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(1));
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(2147483600));
	printf("%d\n", ft_find_next_prime(-2455355));
	printf("%d\n", ft_find_next_prime(2147483647));
	printf("%d\n", ft_find_next_prime(36));
	return (0);
}
