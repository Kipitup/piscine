/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 15:34:27 by amartino          #+#    #+#             */
/*   Updated: 2018/09/16 13:31:35 by amartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(char *str)
{
	int		i;
	int		nb;
	int		sign;

	i = 0;
	nb = 0;
	sign = 1;
	while ((str[i] > 7 && str[i] < 14) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * sign);
	return (0);
}

int		main(void)
{
	int		test;
	char	*s;

	s = "  \n	 5555";
	test = atoi(s);
	printf("\n%d", test);
	printf("\n%d", ft_atoi("  \n	 5555"));
	s = "";
	test = atoi(s);
	printf("\n%d", test);
	printf("\n%d", ft_atoi(""));
	s = "--55";
	test = atoi(s);
	printf("\n%d", test);
	printf("\n%d", ft_atoi("--55"));
	s = "+658-15";
	test = atoi(s);
	printf("\n%d", test);
	printf("\n%d", ft_atoi("+658-15"));
	s = "fkdf65";
	test = atoi(s);
	printf("\n%d", test);
	printf("\n%d", ft_atoi("fkdf65"));
	s = "-2147483648";
	test = atoi(s);
	printf("\n%d", test);
	printf("\n%d", ft_atoi("-2147483648"));
	return (0);
}
