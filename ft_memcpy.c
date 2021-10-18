/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdark <mdark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 21:59:16 by mdark             #+#    #+#             */
/*   Updated: 2021/10/18 17:07:34 by mdark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;
	size_t			i;

	tmp1 = (unsigned char *)dest;
	tmp2 = (unsigned char *)src;
	i = 0;
	if (!tmp1 && !tmp2)
		return ;
	while (i < n)
	{
		tmp1[i] = tmp2[i];
		i++;
	}
	return (dest);
}
