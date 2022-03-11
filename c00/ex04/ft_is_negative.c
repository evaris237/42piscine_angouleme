/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egwanula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:00:16 by egwanula          #+#    #+#             */
/*   Updated: 2022/02/20 17:59:50 by egwanula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	char	neg;
	char	pos;

	if (n < 0)
	{
		neg = 'N';
		write(1, &neg, 1);
	}
	else
	{
		pos = 'P';
		write(1, &pos, 1);
	}
}
