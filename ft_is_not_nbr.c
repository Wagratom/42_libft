/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_not_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:56:14 by wwallas-          #+#    #+#             */
/*   Updated: 2022/09/02 15:58:12 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_not_nbr(char *nbr)
{
	int	digit;
	int	failure;

	failure = 0;
	if (nbr[0] == '-')
		nbr++;
	digit = -1;
	while (nbr[++digit])
	{
		if (!ft_isdigit(nbr[digit]))
			failure = 1;
	}
	return (failure);
}
