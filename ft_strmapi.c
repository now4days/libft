/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdark <mdark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:03:09 by mdark             #+#    #+#             */
/*   Updated: 2021/10/22 17:13:25 by mdark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*news;
	unsigned int	i;
	unsigned int	len;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	news = malloc(len + 1);
	if (!news)
		return (NULL);
	while (i < len)
	{
		news[i] = f(i, s[i]);
		i++;
	}
	news[i] = '\0';
	return (news);
}