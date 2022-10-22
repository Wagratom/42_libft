/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc_or_die.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 09:39:42 by wwallas-          #+#    #+#             */
/*   Updated: 2022/10/22 19:05:33 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_alloc_or_die(size_t itens, size_t size)
{
	void	*ptr;

	ptr = malloc(itens * size);
	if (ptr != NULL)
		return(ptr);
	write(2, "Erro em alocar memória\n", 23);
	exit(EXIT_FAILURE);
}
