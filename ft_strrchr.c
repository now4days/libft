/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdark <mdark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 15:02:33 by mdark             #+#    #+#             */
/*   Updated: 2021/10/17 15:02:35 by mdark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int ch)
{
	int	len;

	len = ft_strlen(str);
	while (len >= 0)
	{
		if (*(str + len) == (char)ch)
			return (str + len);
		len--;
	}
	return (NULL);
}