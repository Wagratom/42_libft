/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 21:03:20 by wwallas-          #+#    #+#             */
/*   Updated: 2022/06/03 17:12:16 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst && count++ >= 0)
		lst = lst->next;
	return (count);
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

	printf("result: %d\n", ft_lstsize(thiard));
	
} */