/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 21:03:07 by wwallas-          #+#    #+#             */
/*   Updated: 2022/06/03 17:21:11 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst)
		return ;
	new->next = *lst;
	*lst = new;
}

/* 
t_list	*creat_no(char *s, t_list *pont)
{
	t_list	*new  = malloc(sizeof(t_list));

	new->content = s;
	if (pont)
		new->next = pont;
	return (new);
}

int main(void)
{
	t_list	*firts = creat_no("santos", NULL);
	t_list	*second =creat_no("ferreira", firts);
	t_list	*thiard =creat_no("wallas", second);

	t_list	*pont;	

	t_list	*iterador = thiard;
	while (iterador)
	{
		printf("value: %s\n", (char *)iterador->content);
		iterador = iterador->next;
	}
	iterador = thiard;
	printf("\nnova lista de cadeia\n\n");
	pont =	ft_lstnew("wagratom");
	ft_lstadd_front(&iterador, pont);
	while (iterador)
	{
		printf("value: %s\n",	(char *)iterador->content);
		iterador = iterador->next;
	}
} */