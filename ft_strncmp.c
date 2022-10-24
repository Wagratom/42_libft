/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:36:16 by wwallas-          #+#    #+#             */
/*   Updated: 2022/10/24 19:01:56 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!s1 || !s2 || !n)
		return (0);
	while ((*s1 || *s2) && --n)
	{
		if (*s1++ != *s2++)
			return ((unsigned char)*(s1 -1) - (unsigned char)*(s2 - 1));
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
