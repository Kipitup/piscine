/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdwatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 15:50:48 by amartino          #+#    #+#             */
/*   Updated: 2018/09/20 15:27:22 by amartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_wdmatch(char *str1, char *str2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str1[i] != '\0')
	{
		while (str1[i] != str2[j] && str2[j] != '\0')
			j++;
		if (str2[j] == '\0')
			return ;
		i++;
	}
	i = 0;
	while (str1[i] != '\0')
	{
		write(1, &str1[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_wdmatch(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}

