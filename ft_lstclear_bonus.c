/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanhern <juanhern@student.42madrid.es>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:13:04 by juanhern          #+#    #+#             */
/*   Updated: 2024/04/11 20:33:06 by juanhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"//REVISAR

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (lst && del)
	{
		while (*lst)
		{
			temp = (*lst);
			del((*lst)->content);
			(*lst) = (*lst)->next;
			free(temp);
		}
	}
}
