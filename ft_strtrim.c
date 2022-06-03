/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:36:55 by wwallas-          #+#    #+#             */
/*   Updated: 2022/06/03 21:00:06 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	end_str(char *copy, char const *set, int size)
{
	int		count;
	int		flag;
	size_t	i;

	count = 0;
	copy += size;
	while (size--)
	{
		copy--;
		i = 0;
		flag = 0;
		while (set[i])
		{
			if (*copy == set[i])
			{
				count++;
				flag = 1;
			}
			i++;
		}
		if (flag == 0)
			return (count);
	}
	return (count);
}

char	*start_check(char const *s1, char const *set)
{
	size_t	i;
	int		flag;

	while (*s1)
	{
		i = 0;
		flag = 0;
		while (set[i])
		{
			if (*s1 == set[i])
				flag = 1;
			i++;
		}
		if (flag == 0)
			break ;
		s1++;
	}
	return (ft_strdup(s1));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*copy1;
	int		s_copy1;
	char	*copy2;
	int		del;

	copy1 = start_check(s1, set);
	if (copy1 == NULL)
		return (NULL);
	s_copy1 = ft_strlen(copy1);
	del = end_str(copy1, set, s_copy1);
	s_copy1 -= del;
	ft_bzero(&copy1[s_copy1], del);
	copy2 = ft_strdup(copy1);
	if (copy2 == NULL)
		return (NULL);
	free(copy1);
	return (copy2);
}
