/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_err_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 19:47:03 by wwallas-          #+#    #+#             */
/*   Updated: 2022/10/22 09:02:27 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_err(char	*messege)
{
	ft_putstr_fd("Error: ", 2);
	ft_putstr_fd(messege, 2);
	exit(EXIT_FAILURE);
}
