/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdark <mdark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 17:30:32 by mdark             #+#    #+#             */
/*   Updated: 2021/10/22 17:13:14 by mdark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*small;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if ((size_t)start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) - (size_t)start > len)
		small = malloc(len + 1);
	else
		small = malloc(ft_strlen(s) - (size_t)start + 1);
	if (!small)
		return (NULL);
	while (i < len && s[start])
	{
		small[i] = s[start];
		i++;
		start++;
	}
	small[i] = 0;
	return (small);
}