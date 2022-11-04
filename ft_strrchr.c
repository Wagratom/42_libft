/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:36:35 by wwallas-          #+#    #+#             */
/*   Updated: 2022/11/04 14:27:17 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*find_reverse_chr(unsigned char *src, unsigned char c, int end_str)
{
	while (src != NULL && end_str--)
	{
		if (src[end_str] == c)
			return ((char *)&src[end_str]);
	}
	return (NULL);
}

char	*ft_strrchr(const char *str, int c)
{
	char			*ptr;
	size_t			len;

	len = ft_strlen(str) + 1;
	ptr = find_reverse_chr((unsigned char *)str, (unsigned char )c, len);
	return (ptr);
}
