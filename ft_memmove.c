/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdark <mdark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 14:55:30 by mdark             #+#    #+#             */
/*   Updated: 2021/10/18 17:07:51 by mdark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *str, size_t num)
{
	unsigned char	*tmp;
	unsigned char	*tmp1;

	tmp = (unsigned char *)dest;
	tmp1 = (unsigned char *)str;
	if (!str && !dest)
		return (dest);
	if (dest > str)
		while (num--)
			*(tmp + num) = *(tmp1 + num);
	else
	{
		while (num--)
			*(tmp++) = *(tmp1++);
	}
	return (dest);
}
