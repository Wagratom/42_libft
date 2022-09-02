/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_not_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:56:14 by wwallas-          #+#    #+#             */
/*   Updated: 2022/09/02 16:26:31 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_int_nbr(char *nbr)
{
	char	*conversion;

	conversion = ft_itoa(ft_atoi(nbr));
	if (ft_strncmp(conversion, nbr, ft_strlen(nbr) + 1))
		return (1);
	return (0);
}
