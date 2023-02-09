/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwalas- <wwallas-@student.42sp.org.br>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:30:40 by wwallas-          #+#    #+#             */
/*   Updated: 2023/02/09 17:39:12 by wwalas-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_robustjoin(char **s1, char **s2)
{
	char	*result;

	result = ft_strjoin(*s1, *s2);
	ft_free_ptr(s1, s2);
	return (result);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tot_str;
	size_t	tot_size;

	tot_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	tot_str = (char *) malloc(tot_size);
	if (!tot_str)
		return (NULL);
	ft_strlcpy(tot_str, s1, ft_strlen(s1) +1);
	ft_strlcat(tot_str, (char *)s2, tot_size);
	return (tot_str);
}
