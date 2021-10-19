/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdark <mdark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 16:15:32 by mdark             #+#    #+#             */
/*   Updated: 2021/10/19 14:14:18 by mdark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	nbr;
	int	positive;

	nbr = 0;
	i = 0;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v')
		|| (str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	positive = (str[i] != '-');
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		if (nbr * 10 < nbr)
			return (positive * -1);
		nbr *= 10;
		nbr += (int)str[i] - '0';
		i++;
	}
	if (positive == 0)
		return (-nbr);
	else
		return (nbr);
}
