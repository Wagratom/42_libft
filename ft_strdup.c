/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:28:02 by wwallas-          #+#    #+#             */
/*   Updated: 2022/10/24 10:48:30 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*cpy;
	int		len;

	if (s == NULL)
		return (NULL);
	len = ft_strlen(s) + 1;
	cpy = (char *) ft_calloc(len, 1);
	ft_strlcat(cpy, s, len);
	return (cpy);
}
