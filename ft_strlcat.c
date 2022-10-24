/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:35:37 by wwallas-          #+#    #+#             */
/*   Updated: 2022/10/24 18:58:46 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	s_src;
	size_t	i;

	len_dst = ft_strlen(dst);
	if (size <= len_dst)
		return (ft_strlen(src) + size);
	size -= len_dst + 1;
	i = -1;
	while (++i < size && src[i])
		dst[len_dst + i] = src[i];
	dst[len_dst + i] = '\0';
	s_src = ft_strlen(src);
	return (s_src + len_dst);
}
