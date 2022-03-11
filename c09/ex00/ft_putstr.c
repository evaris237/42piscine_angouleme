/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egwanula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:22:09 by egwanula          #+#    #+#             */
/*   Updated: 2022/02/23 18:35:33 by egwanula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char	*str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}
