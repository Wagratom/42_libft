/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 21:02:58 by wwallas-          #+#    #+#             */
/*   Updated: 2022/06/03 18:01:12 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while(lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
	
}

/* 
void freeList(t_list *head) {if (head) freeList(head->next); free(head);}

int iTest = 1;
int main(void)
{
	signal(SIGSEGV, sigsegv);
	title("ft_lstlast\t: ")

	t_list * l =  NULL;
	| 1 | check(ft_lstlast(l) == 0);
	ft_lstadd_back(&l, ft_lstnew((void*)1));
	| 2 | check(ft_lstlast(l)->content == (void*)1);
	ft_lstadd_back(&l, ft_lstnew((void*)2));
	| 3 | check(ft_lstlast(l)->content == (void*)2);
	| 4 | check(ft_lstlast(l)->next == 0);
	freeList(l); showLeaks();
	write(1, "\n", 1);
	return (0);
} */

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
	init = pont1;
	init = ft_lstlast(init);
	printf("init: %s\n", (char *)init->content);
	
}
 */