/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:33:02 by wwallas-          #+#    #+#             */
/*   Updated: 2023/02/03 13:54:21 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_array_len(char	**array)
{
	int	len;

	len = 0;
	if (array == NULL)
		return (-1);
	while (array[len])
		len++;
	return (len);
}
