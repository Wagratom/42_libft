/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc_or_die.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 09:39:42 by wwallas-          #+#    #+#             */
/*   Updated: 2022/09/24 10:26:04 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*alloc_or_die(size_t itens, size_t size)
{
	void	*ptr;

	ptr = malloc(itens * size);
	if (ptr != NULL)
		return(ptr);
	write(2, "Erro em alocar memória\n", 23);
	exit(1);
}
