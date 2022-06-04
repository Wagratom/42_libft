/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:18:53 by wwallas-          #+#    #+#             */
/*   Updated: 2022/06/04 01:37:31 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static int	n_houses(long int n, int flg)
{
	int	i;

	i = 1;
	while (n >= 10 && i++)
		n /= 10;
	if (flg)
		i++;
	return (i);
}

static char	*convert_numb(int n, int flag)
{
	unsigned int	aux;
	int				size_n;
	char			*result;

	aux = n;
	if (flag)
		aux = -aux;
	size_n = n_houses(aux, flag) + 1;
	result = (char *) malloc(size_n);
	if (result == NULL)
		return (NULL);
	result[--size_n] = '\0';
	while (aux)
	{
		result[--size_n] = (aux % 10) + 48;
		aux /= 10;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		flag;

	flag = n < 0;
	result = convert_numb(n, flag);
	if (result == NULL)
		return (NULL);
	if (n == 0)
		result[0] = '0';
	if (flag)
		result[0] = '-';
	return (result);
}

/* 
int main()
{
	char *s;

	s = ft_itoa(2147483647);
	printf("itoa %s\n", s);
	//free(s);
}  */
/* 
int main(void)
{
	signal(SIGSEGV, sigsegv);
	title("ft_itoa\t\t: ")

	char * s = ft_itoa(INT_MAX);
	| 1 | check(!strcmp(s, to_string(INT_MAX).c_str()));
	| 2 | mcheck(s, strlen(to_string(INT_MAX).c_str()) + 1); free(s); showLeaks();

	s = ft_itoa(INT_MIN);
	| 3 | check(!strcmp(s, to_string(INT_MIN).c_str()));
	| 4 | mcheck(s, strlen(to_string(INT_MIN).c_str()) + 1); free(s); showLeaks();

	s = ft_itoa(0);
	| 5 | check(!strcmp(s, to_string(0).c_str()));
	| 6 | mcheck(s, strlen(to_string(0).c_str()) + 1); free(s); showLeaks();
	s = ft_itoa(1);
	| 7 | check(!strcmp(s, to_string(1).c_str()));
	| 8 | mcheck(s, strlen(to_string(1).c_str()) + 1); free(s); showLeaks();
	s = ft_itoa(-1);
	| 9 | check(!strcmp(s, to_string(-1).c_str()));
	| 10 | mcheck(s, strlen(to_string(-1).c_str()) + 1); free(s); showLeaks();

	s = ft_itoa(42);
	| 11 | check(!strcmp(s, to_string(42).c_str()));
	| 12 | mcheck(s, strlen(to_string(42).c_str()) + 1); free(s); showLeaks();
	write(1, "\n", 1);
	return (0);
} */