/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:17:19 by wwallas-          #+#    #+#             */
/*   Updated: 2022/10/22 19:05:33 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*rtn;
	int		result;

	if (!nitems || !size)
		return (NULL);
	result = nitems * size;
	if ((result / nitems) != size)
		return (NULL);
	rtn = ft_alloc_or_die(nitems, size);
	ft_memset(rtn, 0, nitems * size);
	return (rtn);
}
