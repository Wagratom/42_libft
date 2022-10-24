/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:37:05 by wwallas-          #+#    #+#             */
/*   Updated: 2022/10/24 18:17:55 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*alloc_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	end_str;

	end_str = ft_strlen(&s[start]) + 1;
	if (end_str <= len)
		return ((char *)ft_calloc(end_str, 1));
	return ((char *)ft_calloc (len, 1));
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub_str;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	sub_str = alloc_substr(s, start, len + 1);
	ft_strlcpy(sub_str, &s[start], len + 1);
	return (sub_str);
}
