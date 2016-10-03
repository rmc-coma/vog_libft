/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstind.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmc-coma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 17:24:05 by rmc-coma          #+#    #+#             */
/*   Updated: 2015/12/10 17:25:53 by rmc-coma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstind(t_list *lst, size_t index)
{
	while (index-- && lst != NULL)
		lst = lst->next;
	return (lst);
}