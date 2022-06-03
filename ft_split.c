/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bankai <bankai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 00:46:58 by wwallas-          #+#    #+#             */
/*   Updated: 2022/05/31 20:48:03 by bankai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_mat(char const *str, char sep)
{
	int	size;

	size = 0;
	if (!str)
		return (-1);
	while (*str && sep)
	{
		if (*str != sep)
		{
			size++;
			while (*str != sep && *str)
				str++;
			if (!*str)
				return (size);
		}
		str++;
	}
	if (!sep)
		size++;
	return (size);
}

static const char	*size_add(const char *str, char sep, int *size)
{
	int	i;

	if (!*str)
		return (NULL);
	i = -1;
	*size = 0;
	while (*str == sep)
		str++;
	while (str[++i] != sep && str[i])
		*size += 1;
	if (!*str)
		return (NULL);
	return (str);
}

static void	del_mat(char **mat)
{
	int	i;

	i = -1;
	while (mat[i])
		free(mat[i]);
}

static char	**aloc_mat(char **matriz, const char *str, char sep)
{
	int	index;
	int	size_aloc;

	index = -1;
	size_aloc = 0;
	str = size_add(str, sep, &size_aloc);
	while (str)
	{
		matriz[++index] = ft_substr(str, 0, size_aloc);
		if (matriz[index] == NULL)
		{
			del_mat(matriz);
			return (NULL);
		}
		str += size_aloc;
		str = size_add(str, sep, &size_aloc);
	}
	matriz[++index] = NULL;
	return (matriz);
}

char	**ft_split(char const *s, char c)
{
	char	**mat;
	int		s_mat;

	s_mat = size_mat(s, c) + 1;
	printf("size %d\n", s_mat);
	mat = (char **)malloc(sizeof(char *) * s_mat);
	if (mat == NULL)
		return (NULL);
	if (s_mat > 1)
		return (aloc_mat(mat, s, c));
	mat[0] = NULL;
	return (mat);
}
