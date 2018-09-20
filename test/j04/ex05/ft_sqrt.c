/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 16:11:57 by amartino          #+#    #+#             */
/*   Updated: 2018/09/06 10:58:42 by amartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_sqrt(int nb)
{
	int		i;

	i = 1;
	while (i <= 46340)
	{
		if ((i * i) == nb)
			return (i);
		i++;
	}
	return (0);
}

int		main(void)
{
	printf("%d\n", ft_sqrt(2147395600));
	printf("%d\n", ft_sqrt(-526));
	printf("%d\n", ft_sqrt(0));
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(65136451321563));
	printf("%d\n", ft_sqrt(10000));
	return (0);
}
