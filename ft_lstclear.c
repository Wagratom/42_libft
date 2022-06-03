/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 03:53:02 by wwallas-          #+#    #+#             */
/*   Updated: 2022/06/03 18:28:05 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}

/* 
int main()
{
	t_list	*s;

	s = (t_list *)malloc(sizeof(t_list));
	printf("s = %p\n", s);
	free(s);
	printf("s = %p\n", s);
	
} */