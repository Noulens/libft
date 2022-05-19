/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <tnoulens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:34:12 by tnoulens          #+#    #+#             */
/*   Updated: 2022/05/16 12:36:12 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	*p;

	p = s;
	if (p)
	{
		while (*p)
		{
			ft_putchar_fd(*p, fd);
			++p;
		}
		ft_putchar_fd('\n', fd);
	}
}
