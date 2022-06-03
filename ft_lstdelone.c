/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 02:39:03 by wwallas-          #+#    #+#             */
/*   Updated: 2022/06/03 18:05:34 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}

/* 
void	del_content(void *content)
{
	free(content);
}

int main()
{
	t_list *p = ft_lstnew(strdup("wagratom"));
	
	printf("p = %s\n", (char *)p->content);
	printf("p = %p\n", p);
	ft_lstdelone(p, &del_content);
	printf("p = %s\n", (char *)p->content);
	printf("p = %p\n", p);
} */