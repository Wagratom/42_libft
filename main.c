/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:12:00 by wwallas-          #+#    #+#             */
/*   Updated: 2022/09/13 19:43:38 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main()
{
	char	**array = (char *[]){"teste","teste1", NULL};
	char	**teste;

	teste = ft_array_dup(array);
	while(*teste)
	{
		printf("teste = %s\n", *teste);
		teste++;
	}
	return (0);
}
