/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_eq.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:25:23 by wwallas-          #+#    #+#             */
/*   Updated: 2022/09/17 19:05:03 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_str_eq(char *str1, char *str2)
{
	if (str1 == NULL && str2 == NULL)
		return (TRUE);
	if (str1 == NULL || str2 == NULL)
		return (FALSE);
	while (*str1 || *str2)
	{
		if (*str1++ != *str2++)
			return (FALSE);
	}
	return (TRUE);
}
