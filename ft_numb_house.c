/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numb_house.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 18:37:39 by wwallas-          #+#    #+#             */
/*   Updated: 2022/10/24 09:56:46 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_numb_house(unsigned long int nbr, int base)
{
	if (nbr < (unsigned long int)base)
		return (1);
	return (ft_numb_house(nbr / base, base) + 1);
}
