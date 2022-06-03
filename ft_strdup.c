/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:28:02 by wwallas-          #+#    #+#             */
/*   Updated: 2022/05/31 16:28:06 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cpy;
	char	*src;
	size_t	i;

	src = (char *)s;
	cpy = (char *) malloc(ft_strlen(s) + 1);
	if (cpy == NULL)
		return (NULL);
	i = -1;
	while (src[++i])
		cpy[i] = src[i];
	cpy[i] = '\0';
	return (cpy);
}
