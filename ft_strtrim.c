/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:36:55 by wwallas-          #+#    #+#             */
/*   Updated: 2022/10/24 18:40:02 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_bool	has_set(char const *s1, char const *set)
{
	while (*set)
	{
		if (ft_strchr(set, *s1))
			return (TRUE);
		set++;
	}
	return (FALSE);
}

static int	end_str(char const *s1, char const *set, int size)
{
	char const	*end_s1;
	int			count;

	count = 0;
	end_s1 = s1 + size;
	while (size-- && end_s1--)
	{
		if (!has_set(end_s1, set))
			break ;
		count ++;
	}
	return (count);
}

static char	const	*start_check_set(char const *s1, char const *set)
{
	while (*s1)
	{
		if (!has_set(s1, set))
			break ;
		s1++;
	}
	return (s1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		del;

	s1 = start_check_set(s1, set);
	del = end_str(s1, set, ft_strlen(s1));
	result = ft_substr(s1, 0, (ft_strlen(s1) - del));
	if (!result)
		return (NULL);
	return (result);
}
