/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanhern <juanhern@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 17:46:03 by juanhern          #+#    #+#             */
/*   Updated: 2024/04/11 20:31:53 by juanhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" //REVISAR
#include <stdio.h>
#include <string.h>

static size_t	ft_special_case(char *src)
{
	size_t	i;

	i = 0;
	while (*src != '\0')
	{
		i++;
		src++;
	}
	return (i);
}

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!dest && size == 0)
		return (ft_special_case(src));
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j + i < size - 1 && size > 0)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (size > 0 && size >= i)
		dest[i + j] = '\0';
	while (src[j])
		j++;
	if (size < i)
		return (j + size);
	else
		return (i + j);
}
