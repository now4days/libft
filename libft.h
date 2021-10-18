/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdark <mdark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:04:11 by mdark             #+#    #+#             */
/*   Updated: 2021/10/18 14:29:03 by mdark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
int	ft_toupper(int ch);
int	ft_isalpha(int ch);





#endif 