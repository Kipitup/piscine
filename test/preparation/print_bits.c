/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 13:57:32 by amartino          #+#    #+#             */
/*   Updated: 2018/09/20 18:59:29 by amartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_bits(unsigned char octet)
{
	char	tab[8];
	int		i;
	int		nb;

	nb = octet;
	i = 0;
	while (i < 8)
	{
		tab[i] = nb % 2;
		nb /= 2;
		i++;
	}
	while (--i >= 0)
	{
		if (i == 3)
			ft_putchar(' ');
		ft_putchar(tab[i] + '0');
	}
}

unsigned char	ft_print_reverse(unsigned char octet)
{
	char	tab[8];
	int		i;
	int		nb;

	nb = octet;
	i = 0;
	while (i < 8)
	{
		tab[i] = nb % 2;
		nb /= 2;
		i++;
	}
	nb = 0;
	i = 0;
	while (i < 8)
	{
		nb = tab[i] + nb * 2;
		i++;
	}
	octet = nb;
	return (octet);
}

void	ft_print_swap(unsigned char octet)
{
	char	tab[8];
	int		i;
	int		nb;

	nb = octet;
	i = 0;
	while (i < 8)
	{
		tab[i] = nb % 2;
		nb /= 2;
		i++;
	}
	i = 3;
	while (i >= 0)
		ft_putchar(tab[i--] + '0');
	ft_putchar(' ');
	i = 7;
	while (i >= 4)
		ft_putchar(tab[i--] + '0');
}

int		main(void)
{
	ft_print_bits(2);
	ft_putchar('\n');
	printf("%d\n", ft_print_reverse(250));
	ft_print_swap(77);
	ft_putchar('\n');
	return (0);
}
