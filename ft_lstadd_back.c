/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 21:05:07 by wwallas-          #+#    #+#             */
/*   Updated: 2022/06/03 17:58:06 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*end;

	if (!new || !lst)
		return ;
	if (!*lst)
		(*lst) = new;
	else
	{
		end = ft_lstlast(*lst);
		end->next = new;
	}
}

/* 
int main()
{
	t_list	*pont1 = ft_lstnew("wagratom");
	t_list	*pont2 = ft_lstnew("wallas");
	t_list	*pont3 = ft_lstnew("ferreira");

	t_list	*init;
	
	ft_lstadd_front(&pont1, pont2);
	
	init = pont1;
	while (init)
	{
		printf("point1 = %s\n", (char*)init->content);
		init = init->next;
	}
	//expected wallas wagratom 
	printf("\n");
	init = pont1;
	ft_lstadd_back(&pont1, pont3);
   	while (init)
	{
		printf("point1 = %s\n", (char*)init->content);
		init = init->next;
	}
	//expexted wallas \n wagratom \n ferreira
}
 */