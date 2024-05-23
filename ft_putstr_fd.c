/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanhern <juanhern@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:15:41 by juanhern          #+#    #+#             */
/*   Updated: 2024/04/11 20:27:44 by juanhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"//REVISAR

void	ft_putstr_fd(char *s, int fd)
{
	if (s && fd)
	{
		while (*s)
			ft_putchar_fd(*s++, fd);
	}
}
