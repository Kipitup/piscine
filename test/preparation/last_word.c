/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 11:03:35 by amartino          #+#    #+#             */
/*   Updated: 2018/09/20 13:55:20 by amartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_last_word(char *str)
{
	int		i;
	int		j;

	i = 0;
	while (str[i + 1])
		i++;
	while ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') && i > 0)
		i--;
	j = i;
	while ((str[j] != ' ' && str[j] != '\n' && str[j] != '\t') && j > 0)
		j--;
	while (j <= i)
		ft_putchar(str[j++]);
	ft_putchar('\n');
}

int main(int argc, char **argv)
{
	if (argc == 2)
		ft_last_word(argv[1]);
	return 0;
}
