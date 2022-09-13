/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:00:44 by wwallas-          #+#    #+#             */
/*   Updated: 2022/09/13 18:07:09 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_array_len(char	**array)
{
	int		len;

	if (array == NULL)
		return (0);
	len = 0;
	while(array[len])
		len++;
	return (len);
}
