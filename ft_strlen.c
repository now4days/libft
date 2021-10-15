/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdark <mdark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 20:17:23 by mdark             #+#    #+#             */
/*   Updated: 2021/10/14 20:20:32 by mdark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int ft_strlen(char *str)
{
    int i;
    while (*str)
    {
        str++;
        i++;
    }
    return (i);
}