/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 17:33:32 by amartino          #+#    #+#             */
/*   Updated: 2018/09/20 19:15:28 by amartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_convert_base(char c)
{
	if (c >= 'A' && c <= 'F')
		c += 32;
	if (c >= '0' && c <= '9')
		return (c - '0');
	return (c - 'a' + 10);
}

int		ft_atoi_base(const char *str, int str_base)
{
	int		i;
	long	nb;
	int		sign;

	i = 0;
	sign = -1;
	if (str_base < 2 || str_base > 16)
		return (0);
	while ((*str > 8 && *str < 14) || *str == ' ')
		str++;
	if (str[i] == '-')
		i++;
	else if (str[i++] == '+')
		sign = 1;
	while (str[i] && (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
		&& ((str[i] >= '0' && str[i] <= '9')
		|| (str[i] >= 'a' && str[i] <= 'f')
		|| (str[i] >= 'A' && str[i] <= 'F')))
	{
		nb = ft_convert_base(str[i]) + nb * str_base;
		i++;
	}
	return (nb * sign);
}

int		main(void)
{

}
