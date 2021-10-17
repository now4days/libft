/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdark <mdark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 14:57:58 by mdark             #+#    #+#             */
/*   Updated: 2021/10/17 14:58:22 by mdark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *str, size_t size)
{
	size_t	i;

	if (!dst || !str)
		return (0);
	if (size == 0)
		return (ft_strlen(str));
	i = 0;
	while (str[i] && i < size - 1)
	{
		dst[i] = str[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(str));
}