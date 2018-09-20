/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 14:57:54 by amartino          #+#    #+#             */
/*   Updated: 2018/09/06 10:55:02 by amartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_fibonacci(int index)
{
	int		fib;

	fib = 0;
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	index = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (index);
}

int		main(void)
{
	printf("%d", ft_fibonacci(6));
	printf("\n%d", ft_fibonacci(30));
	printf("\n%d", ft_fibonacci(0));
	printf("\n%d", ft_fibonacci(1));
	printf("\n%d", ft_fibonacci(2));
	printf("\n%d", ft_fibonacci(-5));
	return (0);
}
