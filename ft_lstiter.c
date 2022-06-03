/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 15:48:00 by wwallas-          #+#    #+#             */
/*   Updated: 2022/06/03 22:13:00 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* 
void	ft_mod_content(void **content)
{
	printf("cheguei\n");
	*content = "wagratom";
}

int main()
{
	t_list	*result = ft_lstnew("Rodrigo");

	ft_lstiter(result, &ft_mod_content);
	printf("result %s\n", (char *)result->content);
} */